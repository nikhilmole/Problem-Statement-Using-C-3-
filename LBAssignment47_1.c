#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int CountCapital(char FName[])
{
    int fd = 0;
    char Buffer[1024];
    int iRet = 0;
    int i = 0;
    int iCnt = 0;

    fd = open(FName, O_RDONLY);
    if (fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    while((iRet = read(fd, Buffer, sizeof(Buffer))) > 0)
    {
        for(i = 0; i < iRet; i++)
        {
            if(Buffer[i] >= 'A' && Buffer[i] <= 'Z')
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
    char FileName[30];
    int iRet = 0;

    printf("Enter the file name\n");
    scanf("%s", FileName);

    iRet = CountCapital(FileName);
    if (iRet != -1)
    {
        printf("Number of capital characters are: %d\n", iRet);
    }
    else
    {
        printf("Failed to count capital characters due to an error.\n");
    }

    return 0;
}
