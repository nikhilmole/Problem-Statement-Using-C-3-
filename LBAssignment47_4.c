#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int CountChar(char filename[], char character)
{
    int fd = 0;
    int i = 0;
    int iRet = 0;
    int iCnt = 0;
    char Buffer[1024];

    if(character >= 'A' && character <= 'Z')
    {
        character = character + 32;
    }

    fd = open(filename, O_RDONLY);
    if(fd == -1)

    {
        printf("Unable to open file\n");
        return -1;
    }

    while((iRet = read(fd,Buffer,sizeof(Buffer))) > 0)
    {
        for(i = 0; i < iRet; i++)
        {
            if(Buffer[i] == character)
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
    char ch = 0;

    printf("Enter the file name : ");
    scanf("%s",Name);
    printf("Enter character you want to count : ");
    scanf(" %c",&ch);

    iRet = CountChar(Name,ch);
    if(iRet != -1)
    {
        printf("Frequency is : %d",iRet);
    }
    else
    {
        printf("Unable to count character\n");
    }

    return 0;
}