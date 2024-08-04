#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

void Read(char filename[], int iNo)
{
    int fd = 0;
    int iRet = 0;
    char Buffer[1024] = {'\0'};

    fd = open(filename, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
    }
    iRet = read(fd,Buffer,iNo);
    printf("%s",Buffer);

    close(fd);
}
int main()
{
    char Name[30];
    int iValue = 0;

    printf("Enter the name of file  : ");
    scanf("%s",Name);

    printf("Enter the number you wnat to read : ");
    scanf("%d",&iValue);

    Read(Name ,iValue);

    return 0;
}