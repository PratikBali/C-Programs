//
//  WrdLast.c
//  
//
//  Created by Pratik Bali on 17/01/18.
//

#include <stdio.h>

void PrintLastWord(char *str)
{
    char *end;
    end = str;
    
    while(*end != '\0')
        end++;
    end--;
    
    while(*str != '\0')
    {
        if(*end == ' ')
        {
            while(*end == ' ')
                end--;
        }
        else
        {
            while(*end != ' ')
                end--;
            end++;
            while( (*end != ' ') && (*end != '\0'))
            {
                printf("%c",*end);
                end++;
            }
            break;
        }
        str++;
        end--;
    }
}

int main()
{
    char srr[1024];
    int i;
    
    printf("\nEnter Sentence : ");
    scanf("%[^'\n']s",srr);
    
    PrintLastWord(srr);
    return 0;
}
