//
//  CopyData.c
//  
//
//  Created by Pratik Bali on 05/01/18.
//

#include "FileHelper.h"

int FileCopy(char* src, char* dest)
{
    int srcFD = 0, destFD = 0, ret = 0;
    char arr[1024];
    
    srcFD = OpenFile(src);
    destFD = OpenFile(dest);
    
    while((ret = read(srcFD,arr,sizeof(arr))) != 0)
    {
        write(destFD,arr,ret);
        memset(arr,0,sizeof(arr));
    }
    printf("\nNew File successfully created and copied\n\n");
    return destFD;
}

int main(int argc,char *argv[])
{
    int fd = 0, total = 0;
    char ch;
    
    if(argc != 3)
    {
        printf("\nERROR : Insufficient arguements\n\n");
        return -1;
    }
    
  FileCopy(argv[1],argv[2]);
 
    close(fd);
    return 0;
}

