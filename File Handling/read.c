#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *ftpr;//why we need file handling
    ftpr=fopen("E:\\java_program\\helloworld.java","r");//open file in reading mode
    if (ftpr==NULL)
    {
        printf("error to read the file");
        exit(1);
    }
    char ch;
    for(;;)// infinite for loop
    {
        ch=fgetc(ftpr);
        if (ch==EOF)//end of file
        {
            break;
        }
        printf("%c",ch);

    }
    fclose(ftpr);
    return 0;
}