//
//  ReadFile.c
//  
//
//  Created by Pratik Bali on 05/01/18.
//

#include "FileHelper.h"

void ReadFile(int fd)
{
    printf("\n Your file data :\n ");
    while((ret = read(fd,arr,sizeof(arr))) != 0)
    {
        printf("%s",arr);
        memset(arr,0,sizeof(arr));
    }
    printf("\n ");
}

int main(int argc,char *argv[])
{
    int fd = 0, total = 0;
    char ch;
    
    if(argc != 2)
    {
        printf("\nInsufficient arguements");
        return -1;
    }
    fd = OpenFile(argv[1]);
    ReadFile(fd);
    
   
    close(fd);
    return 0;
}
