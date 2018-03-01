//
//  strupr.c
//  
//
//  Created by Pratik Bali on 17/01/18.
//

#include <stdio.h>

void struprx(char brr[])
{
    char *ptr = brr;
    
    while((*ptr)!='\0')
    {
        if((*ptr>='a') && (*ptr<='z'))
        {
            *ptr=(*ptr)-32; //for strupr use -32
        }
        ptr++;
    }
}

int main()
{
    char arr[1024];
    char *ptr;
    ptr = arr;
    
    printf("\n Enter String : ");
    scanf("%[^'\n']s",arr);
    
    struprx(arr);
    
    printf("\n Uppercase array is: \n");
    while((*ptr)!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    printf("\n\n");
    
    return 0;
}
