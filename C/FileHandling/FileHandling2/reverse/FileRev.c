#include "FileHelper.h"

void FileRev(char *src, char *dest)
{
    int fd = 0,offStart = 0, offEnd = 0, size = 0, j = 0;
    char  *brr, arr[10], temp[1];
    
    int srcFD = 0, destFD = 0, ret = 0;
    static int icnt = 0;

    srcFD = OpenFileRD(src);
    destFD = OpenFileWR(dest);

    ret = read(srcFD,arr,sizeof(arr));
    brr = (char*)malloc(ret);
    while( ( ret = read(srcFD,arr,sizeof(arr)) ) != 0)
    {
        size = ret;
        size--;
        while(size < 0)
        {
            printf("\n Insufficient arguements");
            offEnd = -1;
            lseek(srcFD,offEnd,2);
   
            brr[icnt] = arr[size];
            write(1,temp,1);
            
            icnt++;
            offEnd--;
            size--;
        }
        memset(arr,0,strlen(arr));
    }
    write(destFD,brr,sizeof(brr));
    //return;
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
