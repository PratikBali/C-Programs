//
//  LastNcpy.c
//  
//
//  Created by Pratik Bali on 17/01/18.
//

#include <stdio.h>

void lastNcpy(char *str,int pos)
{
    char *end;
    int iCnt = 0;
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
            while(iCnt != pos)
            {
                iCnt++;
                end--;
            }
            end++;
            while((*end != '\0'))
            {
                printf("%c",*end);
                end++;
            }
            printf("\n");
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
    
    printf("\n Enter last count of chars : ");
    scanf("%d",&i);
    
    lastNcpy(srr,i);
    return 0;
}
