//
//  StrNrev.c
//  
//
//  Created by Pratik Bali on 18/01/18.
//

#include <stdio.h>
#include<string.h>

//Behaviours
void strNrev(char arr[],int pos)
{
    int i=0;
    int j=pos;
    char temp;
    
    while(i <= j && pos != 0)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        
        i++;
        j--;
        pos--;
        printf(" %d",pos);
    }
}

int main()
{
    char str[] = "india is great";
    strNrev(str,5);
    printf("%s",str);
    //printf("\n\n");
    //puts(str);
    
    return 0;
}
