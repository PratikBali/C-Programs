// reverse string between range

#include<stdio.h>

void RevRange(char *str,int from,int till)
{
    int i = 0, j = 0, k = 0;
    char temp, *end;
    
    end = str;
    while(i < from)
    {
        i++;
        str++;
    }
    printf("\n");
    while(j < till)
    {
        j++;
        end++;
    }
    
    int range = till - from;
    
    while (k <= (range/2))
    {

        temp = *str;
        *str = *end;
        *end = temp;

        k++;
        str++;
        end--;
    }
    return;
}

int main()
{
    char arr[]="Hello world";
    printf("\n%s",arr);
    RevRange(arr,3,8);
    printf("\n%s\n",arr);
    
    return 0;
}
