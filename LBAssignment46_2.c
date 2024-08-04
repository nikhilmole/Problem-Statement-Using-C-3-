#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

void Create(char filename[])
{
    int fd = 0;

    fd = creat(filename,0777);
    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File gets successfully created\n");
        
    }
    close(fd);
}

int main()
{
    char Name[30];

    printf("Enter file name you want to creat : \n");
    scanf("%s",Name);

    Create(Name);

    return 0;
}