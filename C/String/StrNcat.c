//
//  StrNcat.c
//  
//
//  Created by Pratik Bali on 17/01/18.
//

#include <stdio.h>

void strNcat(char *ptr1,char *ptr2,int pos)
{
    char *str = ptr1;
     //printf("Hi");
    while(*ptr1 != '\0')
    {
        //printf("%c",*ptr1);
        ptr1++;
    }
    //ptr1--;
    *ptr1 = ' ';
    ptr1++;
    
    //printf("%s",str);
    //puts(ptr1);
    
    while(*ptr2 != '\0' && pos != 0)
    {
        /*printf("\n ptr1 : %c",*ptr1);
        printf("\n\t ptr2 : %c",*ptr2);
        printf("\n\t\t pos : %d",pos);*/
        *ptr1 = *ptr2;
        
        ptr1++;
        ptr2++;
        pos--;
    }
    //printf("\n <breakpoint 1> \n");
    *ptr1 = '\0';
    //printf("\n <breakpoint 2> \n");
    //puts(str);
    //printf("\n <breakpoint 3> \n");

}

int main()
{
    char str1[]="India is my first love";
    char str2[]="Thank you";
    
    strNcat(str1,str2,5);
    
    //char *ptr = str1;
    
    //printf("%s",str1);
    //printf("\n <breakpoint 4> \n");
    puts(str1);
    //printf("\n <breakpoint 5> \n");

   // printf("\n");
    
    return 0;
}

