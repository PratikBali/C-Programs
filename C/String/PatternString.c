// reverse string between range

#include<stdio.h>

void PrintPattern(char *str)
{
    int i = 0, j = 0, k = 0;
    char *temp, *counter;
    
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            while((*str == ' ' ) &&(*str != '\0'))
            {
                str++;
            }
        }
        else
        {
            //printf("\n Setting counter to current position of string i.e. start of next word");
            counter = str;
            k = 0;
            
            //printf("\n Counting length of word");
            while((*counter != '\0') && (*counter != ' '))
            {
                k++;counter++;
            }

            //printf("\n Printing Pattern");
            for(i=0; i<=k; i++)
            {
                temp = str;
                for(j=0; j<i; j++)
                {
                    printf("%c ",*temp);
                    temp++;
                }
                printf("\n");
            }
            
            //printf("\n Going for next word");
            while((*str != '\0') && (*str != ' '))
            {
                str++;
            }
            
        }
    }
    
    return;
}

int main()
{
    char arr[]=" Pratik Sanjay Bali";
    printf("\n%s",arr);
    PrintPattern(arr);
    printf("\n Function call complete\n");
    
    return 0;
}
