//
//  StrWrev2.c
//  
//
//  Created by Pratik Bali on 18/01/18.
//

#include <stdio.h>
#include<string.h>

void strrevx(char arr[])
{
    int i=0, j=strlen(arr)-1;
    char temp;
    
    while(i<=j)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        
        i++;
        j--;
    }
}

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
    strrevx(arr);
    puts(arr);
    
    return 0;
}
