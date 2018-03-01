//
//  CopyData.c
//  
//
//  Created by Pratik Bali on 05/01/18.
//

#include "FileHelper.h"

int FileCopy(char* src, char* dest)
{
    int srcFD = 0, destFD = 0, ret = 0,  icnt = 0;
    static int index = 0;
    char arr[1024],temp[1];
    
    srcFD = OpenFileRD(src);
    destFD = OpenFile(dest);
    
    while((ret = read(srcFD,arr,sizeof(arr))) != 0)
    {
        icnt = 0;
        while (icnt <= ret)
        {
            int j = 0;
            if((arr[icnt] >= 'A') && (arr[icnt] <= 'Z'))
            {
                temp[j] = arr[icnt];
                write(1,temp,1);
               write(destFD,temp,1);
            }
            icnt++;
            //index++;
        }
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

