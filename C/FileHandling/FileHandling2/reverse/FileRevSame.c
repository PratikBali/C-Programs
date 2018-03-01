
#include "FileHelper.h"

void FileRev(char *name)
{
    int fd = 0, offStart = 0, offEnd = -1, chStart = 0, chEnd = 0, size = 0, j = 0, i=0, ret=0;
    char  *ptrStart, *ptrEnd, *arr, swap;

    fd = OpenFileRD(name);

    size = FileSize(fd);
    size--;
    printf("Size : %d \n",size+1);
    arr = (char*)malloc(size * sizeof(char));

    for(offEnd = -1, j=size, i=0; j >= 0 ; offEnd--,j--,i++)
    {
         lseek(fd,offEnd,2);
         ptrEnd = (char*)malloc(sizeof(char));
         chEnd = read(fd,ptrEnd,1);
        //printf(" %d ",chEnd);
         if(chEnd >= 0)
         {
             arr[i] = *ptrEnd;
             //printf(" %c ",arr[j]);
         }
    }
    fd = OpenFileWR(name);
    write(fd,arr,strlen(arr));

    return;
}

int main(int argc,char *argv[])
{
    int fd = 0, total = 0;
    char ch;
    
    if(argc != 2)
    {
        printf("\n Insufficient arguements");
        return -1;
    }
    fd = OpenFileRDWR(argv[1]);
    PrintFile(fd);
  
    printf("\n After Reverse : ");
    FileRev(argv[1]);
    printf("\n\n");
    
    close(fd);
    return 0;
}
