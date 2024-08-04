#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int CountSmall(char filename[])
{
    int fd = 0;
    char Buffer[1024];
    int iRet = 0;
    int iCnt = 0;
    int i = 0;

    fd = open(filename, O_RDONLY); 

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }

    while((iRet = read(fd, Buffer, sizeof(Buffer))) > 0)
    {
        for(i = 0; i < iRet; i++)
        {
            if(Buffer[i] > 'a' || Buffer[i] < 'z')
            {
                iCnt++;
            }
        }
    }
    return iCnt;
    close(fd);
}
int main()
{
    char Name[30];
    int iRet = 0;

    printf("Enter the file name : ");
    scanf("%s",Name);

    iRet = CountSmall(Name);

    if(iRet != -1)
    {
        printf("Samall character count is : %d",iRet);
    }
    else
    {
        printf("Field to count the character due to an error\n");
    }

    return 0;
}