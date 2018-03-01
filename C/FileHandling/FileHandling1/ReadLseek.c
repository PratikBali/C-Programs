//ReadLseek.c
// Accept file name, offset , number of bytes and read file from that offset to that number of bytes

#include "FileHelper.h"

void PrintLseek(char *name, int offset, int size)
{
    int fd = 0, ret = 0;
    char *ptr;

    fd = open(name,O_RDONLY);
    if(fd == -1)
    {
        printf("\n ERROR: Unable to open the file \n\n");
        return ;
    }
    
    lseek(fd,offset,0);
    
    ptr = (char*)malloc(size  * sizeof(char));
    
    ret = read(fd,ptr,size);
    
    if(ret >= 0)
    {
        printf("%s",ptr);
    }
    else return;
}

int main(int argc,char *argv[])
{
    int fd = 0, total = 0;
    char ch;
    
    if(argc != 2)
    {
        printf("\nInsufficient arguements");
        return -1;
    }
    fd = OpenFile(argv[1]);
    PrintFile(fd);
  
    printf("\nAfter lseek : ");
    PrintLseek(argv[1],5,10);
    printf("\n\n");
    
    close(fd);
    return 0;
}
