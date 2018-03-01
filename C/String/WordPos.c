//
//  WrdLast.c
//  
//
//  Created by Pratik Bali on 17/01/18.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void WordPos(char *arr, int pos)
{
    char *str;
    int word = 0;
    int size = strlen(arr);
    str = (char*) malloc (size);
    strcpy(str,arr);
    
    printf("\nSentence : %s\n\n",str);
    printf("\npos :%d\n",pos);
    
   while(*str != '\0')
    {
        if(*str == ' ')
        {
            while( (*str == ' ') && (*str != '\0') )
            {
                str++;
            }
        }
        
        else
        {
            word++;
            if(word == pos)
            {
                //word++;
                while( (*str != ' ') && (*str != '\0') )
                {
                    printf("%c",*str);
                    str++;
                }
                printf("\n\n");
            }
            else
            {
                while( (*str != ' ') && (*str != '\0') )
                {
                    str++;
                }
            }
        }//end of word
    }//end of string
}

int main()
{
    char srr[1024];
    int i;
    
    printf("\nEnter Sentence : ");
    scanf("%[^'\n']s",srr);
    printf("\nEnter position : ");
    scanf("%d",&i);
    printf("\npos :%d\n",i);
    WordPos(srr,i);

}
