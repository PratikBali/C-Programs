//CountWord.c
// Count total no of words from file

#include "FileHelper.h"

int CountWord(char *name)
{
     int fd = 0, i = 0, count = 0;
    char arr[10];
    
    fd = open(name,O_RDONLY);
    
    while((i = read(fd,arr,sizeof(arr))) != 0)
    {
        i--;
        if(arr[i] == ' ')
        {
            while((arr[i] == ' ' ) && (arr[i] != '\0'))
            {
                i--;
            }
        }
        else
        {
            count++;
            while((arr[i] != ' ') && (arr[i] != '\0'))
            {
                i--;
            }
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
    PrintFile(fd);
    total = CountWord(argv[1]);
    
    printf("\nTotal Words : %d \n\n",total);
    
    close(fd);
    
    return 0;
}
