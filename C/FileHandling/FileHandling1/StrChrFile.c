//StrChrFile.c
// Accept character and count occurrance of that character from file

#include "FileHelper.h"

int CountChar(char *name, char ch)
{
    int fd = 0, i = 0, count = 0;
    char arr[10];
    
    fd = open(name,O_RDONLY);
    while((i = read(fd,arr,sizeof(arr))) != 0)
    {
        i--;
        while(i >= 0)
        {
            if(arr[i] == ch)
            {
                count++;
            }
            i--;
        } memset(arr,0,sizeof(arr));
    }
    close(fd);
    return count;
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
    PrintFile(fd);
    
    printf("\n Enter character : ");
    scanf("%c",&ch);
    total = CountChar(argv[1],ch);
    printf("\nOccurrance : %d \n\n",total);
    
    close(fd);
    return 0;
}
