#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

void OpenFile(char nameoffile)
{
    int fd = 0;
    bool
    fd = create(nameoffile, 0777);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
}
int main()
{
    char Filename[30];

    printf("Enter File name you want to creat : ");
    scanf(" %[^'\n']s");

    OpenFile(Filename);

    return 0;
}