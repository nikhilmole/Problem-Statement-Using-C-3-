#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int CountSpace(char filename[])
{
    int i = 0;
    int iRet = 0;
    int iCnt = 0;
    int fd = 0;
    char Buffer[1024];

    fd = open(filename, O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open the file\n");    
        return -1;
    }
    while((iRet = read(fd, Buffer,sizeof(Buffer))) > 0)
    {
        for(i = 0; i < iRet; i++)
        {
            if(Buffer[i] == ' ')
            {
                iCnt++;
            }
        }
    }
    close(fd);
    return iCnt;
}
int main()
{
    char Name[30];
    int iRet = 0;

    printf("Enter the file name : \n");
    scanf("%s",Name);

    iRet = CountSpace(Name);
    if(iRet != -1)
    {
        printf("Number of white spaces are : %d",iRet);
    }
    else
    {
        printf("Unable to open file due to error\n");
    }
    return 0;
}