//
//  CopyNByte.c
//
//
//  Created by Pratik Bali on 11/01/18.
//

#include "FileHelper.h"

void CopyHalf(char *src, char* dest, char* dest2)
{
    int srcFD = 0, destFD = 0, destFD2 = 0, ret = 0, ActualSize = 0, half = 0;
    char *arr,*brr;
    
    
    srcFD = OpenFileRD(src);
    destFD = create(dest);
    destFD2 = create(dest2);
    
    lseek(srcFD,0,0);
    ActualSize = lseek(srcFD,0,2);
    
    printf("\n ActualSize : %d ",ActualSize);
        half = (ActualSize/2);
        printf("\n Half Size : %d ",half);
    
    arr = (char*)malloc(half  * sizeof(char));
    brr = (char*)malloc(half  * sizeof(char));

    lseek(srcFD,0,0);
    ret = read(srcFD,arr,half);
    
    if(ret >= 0)
    {
        printf("\n ret : %d ",ret);
        printf("\n%s",arr);
        write(destFD,arr,ret);
        
        printf("\nWritten first file");
        //memset(arr,0,strlen(arr));
    }
    else
    {
        printf("\n ret : %d ",ret);
        printf("\nError: Cannot read file");
        return;
    }
    
    lseek(srcFD,0,1);
    ret = read(srcFD,brr,half);
    
    if(ret >= 0)
    {
        printf("\n ret : %d ",ret);
        printf("\n%s",brr);
        write(destFD2,brr,ret);
       
        printf("\nWritten second file");
        //memset(arr,0,strlen(arr));
    }
    else
    {
        printf("\n ret : %d ",ret);
        printf("\nError: Cannot read file");
        return;
    }

}

int main(int argc,char *argv[])
{
    int fd = 0, total = 0;
    char ch;
    
    if(argc != 4)
    {
        printf("\nInsufficient arguements");
        printf("\n usage : <exename> <source filename> <dest filename> <dest filename2>\n");
        
        return -1;
    }
    
    CopyHalf(argv[1],argv[2],argv[3]);
    printf("\n\n");
    
    close(fd);
    return 0;
}
