//CountCapChar.c
// Count the total no of capital characters from file
#include "FileHelper.h"

int CountCapChar(int fd)
{
    int i = 0, count = 0;
    char arr[20];
    
    while((i = read(fd,arr,strlen(arr))) != 0)
    {
        while (i >= 0)
        {
            if((arr[i] >= 'A') && (arr[i] <= 'Z'))
            {
                count ++;
            }
            i--;
        }
        memset(arr,0,sizeof(arr));
    }
    return count;
}

int main(int argc,char *argv[])
{
    int fd = 0, total = 0;

    if(argc != 2)
    {
        printf("\nInsufficient arguements");
        return -1;
    }
    fd = OpenFile(argv[1]);
    total = CountCapChar(fd);
    
    printf("\nTotal capital characters : %d \n\n",total);
    
    close(fd);
    
    return 0;
}
