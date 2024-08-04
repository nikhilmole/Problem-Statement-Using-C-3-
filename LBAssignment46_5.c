#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

void AppendtoFile(char filename[],char str[])
{
    int fd = 0;
    int iRet = 0;

    fd = open(filename,O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to ope the file");
    }
    iRet = write(fd,str,strlen(str));
    
    if(iRet == -1)
    {
        printf("Unable to write");
        close(fd);
    }
    close(fd);

}
int main()
{
    char Name[30];
    char str[256];

    printf("Enter the file name : \n");
    scanf("%s",Name);
    printf("Enter string you want to write : \n");
    scanf(" %[^'\n']s",str);

    AppendtoFile(Name,str);

    printf("String Append to the file successfully");
    return 0;
}