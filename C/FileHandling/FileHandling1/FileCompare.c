//
//  FileCompare.c
//  
//
//  Created by Pratik Bali on 05/01/18.
//

#include "FileHelper.h"

int FileCompare(int srcFD,int destFD)
{
    int srcRET = 0, destRET = 0, i = 0;
    char arr[512],brr[512];
    
    while(((srcRET = read(srcFD,arr,sizeof(arr))) != 0) && (destRET = read(destFD,brr,sizeof(brr)) != 0))
    {
        if(srcRET != destRET)
            break;
        
        for(i=0; i<srcRET; i++)
        {
            if(arr[i] != brr[i])
                break;
        }
        
        if(i != srcRET) /// mismatch character
            break;

        memset(arr,0,sizeof(arr));
        memset(brr,0,sizeof(brr));
    }
    
    if(srcRET == 0 && destRET == 0)
        return 1;
    else
        return 0;
}

int main(int argc,char *argv[])
{
    int srcFD = 0, destFD = 0, ret = 0;
    char ch;
    
    if(argc != 3)
    {
        printf("\nERROR : Insufficient arguements\n\n");
        return -1;
    }
    
    srcFD = OpenFile(argv[1]);
    destFD = OpenFile(argv[2]);
    ret = FileCompare(srcFD,destFD);
    
    if(ret == 1)
        printf("\nSuccess\n\n");
    else printf("\nFailed\n\n");
    
    close(srcFD);
    close(destFD);
    return 0;
}
