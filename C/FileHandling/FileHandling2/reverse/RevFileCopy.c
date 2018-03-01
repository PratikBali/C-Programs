#include "FileHelper.h"

void FileRev(char *src, char *dest)
{
    int size = 0, icnt = 0;
    char buffer;
    
    int srcFD = 0, destFD = 0, ret = 0;
   // static int icnt = 0;

    srcFD = open(src,0400);//read permission for user
    destFD = creat(dest,0700);//user permission - read,write,execute

    size = FileSize(srcFD);
    size--;
    
    for(icnt=size; icnt>=0; icnt--)
    {
        lseek(srcFD,icnt,SEEK_SET);//read from last
        read(srcFD,&buffer,1);
        ret = write(destFD,&buffer,1);
    }
}


int main(int argc,char *argv[])
{
    int fd = 0, total = 0;
    char ch;
    
    if(argc != 3)
    {
        printf("\n Insufficient arguements");
        return -1;
    }
    FileRev(argv[1],argv[2]);
    
    printf("\n\n");
    close(fd);
    return 0;
}
