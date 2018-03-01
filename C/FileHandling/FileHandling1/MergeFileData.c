//
//  MergeFileData.c
//  
//
//  Created by Pratik Bali on 05/01/18.
//

#include "FileHelper.h"

void MergeData(int srcFD,int destFD)
{
    while((ret = read(srcFD,arr,sizeof(arr))) != 0)
    {
        write(destFD,arr,ret);
        memset(arr,0,sizeof(arr));
    }
}

int main(int argc,char *argv[])
{
    int srcFD = 0, destFD = 0;
    char ch;
    
    if(argc != 3)
    {
        printf("\nERROR : Insufficient arguements\n\n");
        return -1;
    }
    
    srcFD = OpenFile(argv[1]);
    destFD = OpenFile(argv[2]);
    MergeData(srcFD,destFD);
    
    close(fd);
    return 0;
}

