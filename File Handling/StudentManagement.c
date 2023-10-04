#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void insert(FILE *fp);	
void del(FILE *fp);
void modify(FILE *fp);
int search(FILE *fp,char *name);
void display(FILE *fp);
void list(FILE *fp);

struct 
{
	int rollno;
	char name[50];
	float fees;
	char address[50];
}student;

int main()
{
	int choice;
	FILE *fp;
	fp = fopen("students.dat","rb+");
	if(fp==NULL)
	{
		fp=fopen("students.dat","wb+");
		if(fp==NULL)
		{
			printf("Error in opening or creating file\n");
			exit(1);
		}
	}
	while(1)
	{
		
		printf("\n\n1.Insert a new record\n");
		printf("2.Delete a record\n");
		printf("3.Display record of a student\n");
		printf("4.Modify an existing record\n");
		printf("5.List all records\n");
		printf("6.Exit\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
        fflush(stdin);
		switch(choice)
		{
			case 1:
				insert(fp);
				break;
			case 2:
				del(fp);
				break;
			case 3:
				display(fp);
				break;
			case 4:
				modify(fp);
				break;
			case 5:
				list(fp);
				break;
			case 6:
				fclose(fp);
				exit(0);
			default :
				printf("Wrong choice\n");
		}/*End of switch */
	}/*End of while */
	return 0;
}/*End of main( ) */

void insert(FILE *fp)
{
	fseek(fp,0,SEEK_END);
	printf("Enter student rollno : ");
	scanf("%d",&student.rollno);
    fflush(stdin);
	printf("Enter student name : ");
	scanf("%[^\n]s",student.name);
    fflush(stdin);
	printf("enter the address : ");
	scanf("%[^\n]s",student.address);
	fflush(stdin);
	printf("Enter fees of student : ");
	scanf("%f",&student.fees);
	int status=fwrite(&student,sizeof(student),1,fp);
	if (status>0)
	{
		printf("student added succesfully!!!\n");
	}
	else
	{
		printf("unable to add student!!!\n");
	}
}/*End of insert()*/

void del(FILE *fp)
{
	FILE *fptmp;
	char name[50];
	printf("Enter the name of student to be deleted from database : ");
	scanf("%[^\n]s",name);
	if(search(fp,name)==0)
		return;
	fptmp = fopen("tempfile.dat","wb");
	rewind(fp);
	while(fread(&student, sizeof(student),1,fp) == 1)
	{
		if(strcmp(name,student.name)!=0)
			fwrite(&student,sizeof(student),1,fptmp);
	}
	fclose(fp);
	fclose(fptmp);
	remove("students.dat");
	rename("tempfile.dat","students.dat");
	printf("\nRecord deleted........\n\n");
	fp = fopen("students.dat", "rb+");
}/*End of del()*/

void modify(FILE *fp)
{
	char name[50];
	long size = sizeof(student);
	printf("Enter the name of the student to be modified : ");
	scanf("%[^\n]s",name);
	fflush(stdin);
	if(search(fp,name) == 1)
	{
		printf("Enter new data-->\n\n");
		printf("Enter student rollno : ");
		scanf("%d",&student.rollno);
		printf("Enter student name : ");
		scanf("%[^\n]s",student.name);
		printf("enter the address : ");
		scanf("%[^\n]s",student.address);
		// fflush(stdin);
		printf("Enter fees of student : ");
		scanf("%f",&student.fees);
		fseek(fp,-size,1);
		fwrite(&student,sizeof(student),1,fp);
		printf("\nRecord successfully modified\n\n");
	}
}/*End of modify()*/


void display(FILE *fp)
{
	char name[50];
	printf("Enter the name of the student : ");
	scanf("%[^\n]s",name);
	if(search(fp,name)==1)
	{
		printf("rollno\t%d\n",student.rollno);
		printf("Name\t%s\n",student.name);
		printf("address\t%s\n",student.address);
		printf("fees\t%f\n\n",student.fees);
	}
}/*End of display()*/

int search(FILE *fp,char *name)
{
	int flag=0;
	rewind(fp);
	while(fread(&student, sizeof(student),1,fp)==1)
	{
		if(strcmp(name,student.name)==0)
		{
			flag = 1;
			break;
		}
	}
	if(flag == 0)
		printf("\nName not found in file\n\n");
	return flag;
}/*End of search()*/

void list(FILE *fp)
{
	rewind(fp);
	printf("\n%-20s %-20s %-20s %-20s \n"," rollno","    name","       address","    fees");
	printf("%-20s %-20s %-20s %-20s \n"," ----","    ------","      ------","    ------");
	
	while(fread(&student, sizeof(student),1,fp)==1)
	{
		printf("%-22d",student.rollno);
		printf("%-22s",student.name);
		printf("%-22s",student.address);
		printf("%-22f",student.fees);
		printf("\n");
	}
}/*End of list()*/