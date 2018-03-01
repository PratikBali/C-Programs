//
//  StrWrev2.c
//  
//
//  Created by Pratik Bali on 18/01/18.
//

#include <stdio.h>

void wordrev(char *arr)
{
    char *begin = arr, *end = arr;
    char temp;
    
    while(*arr != '\0')
    {
        if(*arr == ' ')
        {
            while((*arr == ' ' ) &&(*arr != '\0'))
            {
                begin++;
                end++;
                arr++;
            }
        }
        else
        {
            while((*arr != ' ') &&(*arr != '\0'))
            {
                end++;
                arr++;
            }
            end--;
            while(begin < end)
            {
                temp = *end;
                *end = *begin;
                *begin = temp;
                
                begin++;
                end--;
                //j--;
            }
            begin = arr;
            end = arr;
        }
    }
}

int main()
{
    char arr[100] = "  Pratik  Sanjay    Bali  ";
    puts(arr);
    wordrev(arr);
    puts(arr);
    
    return 0;
}
