#include "FileHelper.h"

void FileRev(char *src, char *dest)
{
    int fd = 0, offEnd = -1, chEnd = 0, size = 0, j = 0;
    char  *ptrStart, *ptrEnd, *arr, swap;
    
    int srcFD = 0, destFD = 0, ret = 0;
    static int i = 0;
    
    printf("\n Going to open Source file ");
    srcFD = OpenFileRD(src);
    printf("\n Going to open destination file ");
    destFD = OpenFileWR(dest);
    printf("\n  : %d",destFD);
    size = FileSize(fd);
    size--;
    printf("\n size : %d ",size);

    arr = (char*)malloc(size * sizeof(char));
    printf("\n memory for array arr[] is allocated");

    for(offEnd = -1, j=size, i=0; j >= 0 ; offEnd--,j--,i++)
    {
        printf("\n inside for loop");
        lseek(srcFD,offEnd,2);
        
        ptrEnd = (char*)malloc(sizeof(char));
        chEnd = read(fd,ptrEnd,1);
        
        //printf(" %d ",chEnd);
        if(chEnd > 0)
        {
            arr[i] = *ptrEnd;
            printf(" %c ",arr[i]);
        }
    }
    
    write(destFD,arr,strlen(arr));
    
    return;
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

