//
//  StrLastNRev.c
//  
//
//  Created by Pratik Bali on 18/01/18.
//

#include <stdio.h>
#include <string.h>

void strLNrev(char arr[],int pos)
{
    int i = 0,k = 0;
    int j = strlen(arr);
    j = j - 1;
    char temp;
    
    k = j-pos;
    
    
    while(k<=j)
    {
        temp=arr[k];
        arr[k]=arr[j];
        arr[j]=temp;
        
        k++;
        j--;
    }
    
}

int main()
{
    char str[] = "india is great";
    strLNrev(str,8);
    printf("%s",str);
    //printf("\n\n");
    //puts(str);
    
    return 0;
}
