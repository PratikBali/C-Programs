/// Program for count word from string

#include<stdio.h>

int CountWord(char *arr)
{
    int icnt = 0;
    
    while(*arr != '\0')
    {
        if(*arr == ' ')
        {
            while((*arr == ' ' ) &&(*arr != '\0'))
            {
                arr++;
            }
        }
        else
        {
            icnt++;
            while((*arr != ' ') &&(*arr != '\0'))
            {
                arr++;
            }
        }
    }
    
    return icnt;
}

int main()
{
    char arr[100] = "  Pratik  Sanjay    Bali  ";
    
    int ret = CountWord(arr);
    
    printf("Total Words in string are : %d ",ret);
    
    return 0;
}


