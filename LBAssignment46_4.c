#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>

int FileSize(char filename[])
{
    int fd = 0;

    fd = open(filename, O_RDWR);  

    if (fd == -1) 
    {
        perror("Error opening file");
        return -1;
    }

    int size = lseek(fd, 0, SEEK_END);
    
    if (size == -1) 
    {
        perror("Error determining file size");
        close(fd);
        return -1;
    }

    close(fd); 
    return size;
}

int main()
{
    char Name[30];
    int iRet = 0;

    printf("Enter the file name: ");
    scanf("%s", Name);

    iRet = FileSize(Name);
    if (iRet != -1)  
    {
        printf("Size of the file '%s' is %d bytes.\n", Name, iRet);
    }

    return 0;
}
