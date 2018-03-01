//
//  StrWrev2.c
//  
//
//  Created by Pratik Bali on 18/01/18.
//

#include <stdio.h>

void wordrev(char *arr)
{
    char *begin = arr, *end = arr, temp;
    int iCnt = 0;
    
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
                iCnt++;
            }
            end--;
            if(iCnt%2 == 0)
            {
                while(begin < end)
                {
                    temp = *end;
                    *end = *begin;
                    *begin = temp;
                    
                    begin++;
                    end--;
                    //j--;
                }
            }
            begin = arr;
            end = arr;
        }
    }
}

int main()
{
    char arr[100] = "  Pratik  Sanjay    Bali  sneha ";
    puts(arr);
    wordrev(arr);
    puts(arr);
    
    return 0;
}
