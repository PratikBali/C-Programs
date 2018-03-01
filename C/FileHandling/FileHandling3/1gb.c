#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

int main()
{
    int fd = 0,i = 0, j = 0, k = 0 ;
    long size = 1024;

    fd = creat("gb.txt",0777);
    if(fd == -1)
        printf("\n ERROR: File not created.\n");
    
    char *arr; ///B/// 1-GB = 1024-MB = 1048576-KB = 1073741824-B
    
    
    printf("size of arr : %d \n",sizeof(arr));
    
    for(i = 0; i < 1024; i++)               //Giga Byte
    {
        for(j = 0; j < 1024; j++)           //Mega Byte
        {
            for(k = 0; k < 1024; k++)       //Kilo Byte
            {
                for(k = 0; k < 1024; k++)   //Byte
                {
                    
                }
            }
        }
    }
}
