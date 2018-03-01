//
//  CopyNByte.c
//  
//
//  Created by Pratik Bali on 11/01/18.
//

#include "FileHelper.h"

void CopyNByte(char *src, char* dest,int bytes)
{
     //printf("\n bytes : %d ",bytes);
    int srcFD = 0, destFD = 0, ret = 0, ActualSize = 0;
    char *arr;
    
    srcFD = OpenFileRD(src);
    PrintFile(srcFD);
    destFD = OpenFileWR(dest);
    
    lseek(srcFD,0,0);
    ActualSize = FileSize(srcFD);
    printf("\n ActualSize : %d ",ActualSize);
    
    if(bytes>ActualSize)
    {
        printf("\nError: input Bytes are more than file size");
        printf("\nSolution: Please enter bytes between 1 to %d ",ActualSize);
        return;
    }
    
    //printf("\n bytes : %d ",bytes);
    arr = (char*)malloc(bytes);
  
    lseek(srcFD,0,0);
    ret = read(srcFD,arr,bytes);
    printf("\n ret : %d ",ret);
    
    if(ret >= 0)
    {
        write(destFD,arr,ret);
        printf("\nWritten");
        //memset(arr,0,strlen(arr));
    }
    else
    {
        
        printf("\nError: Cannot read file");
        return;
    }
}

int main(int argc,char *argv[])
{
    int fd = 0, total = 0, size = 0;
    char ch;
    
    if(argc != 4)
    {
        printf("\nInsufficient arguements");
        printf("\n usage : <exename> <source filename> <dest filename>\n");

        return -1;
    }
    printf("\n Enter no of bytes to be read :\n");
    scanf("%d",&size);
    
    // printf("\n bytes : %d ",size);
    
    CopyNByte(argv[1],argv[2],size);
    printf("\n\n");
    
    close(fd);
    return 0;
}
