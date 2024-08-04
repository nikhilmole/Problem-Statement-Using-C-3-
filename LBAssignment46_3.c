#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

void Read(char filename[])
{
    int fd = 0;
    int iRet = 0;
    char Data[30] = {'\0'};

    fd = open(filename, O_RDWR);

    iRet = read(fd,Data,10);
    printf("%d bytes gets successfulyy read  \n",iRet);
    
    printf("%s\n",Data);

    close(fd);

}
int main()
{
    char Name[30];

    printf("Enter file name you want to read ");
    scanf("%s",Name);

    Read(Name);

    return 0;
}