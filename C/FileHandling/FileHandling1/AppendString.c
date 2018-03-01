// AppendString.c
// Accept file anme and string from user and write that string at the end of the file

#include "FileHelper.h"

void AppendString(int fd)
{
    int i = 0, count = 0;
    char arr[100];
    
    printf("\nEnter String : ");
    gets(arr);
    
    write(fd,arr,strlen(arr));
    return;
}

int main(int argc,char *argv[])
{
    int fd = 0, total = 0;
    
    if(argc != 2)
    {
        printf("\nInsufficient arguements");
        return -1;
    }
    fd = OpenFile(argv[1]);
        PrintFile(fd);
    AppendString(fd); close(fd);
    fd = OpenFile(argv[1]);
        PrintFile(fd);
    
    close(fd);
    return 0;
}
