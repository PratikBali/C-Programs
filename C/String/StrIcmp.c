//
//  StrIcmp.c
//  
//
//  Created by Pratik Bali on 18/01/18.
//

#include <stdio.h>

int strIcmpx(char *ptr1,char *ptr2)
{
    int flag = 0,diff = 0;
    while(*ptr1 != '\0')
    {
        flag=0;
        
        while(*ptr2 != '\0')
        {
            if( (*ptr2 == *ptr1) || (*ptr2 == *ptr1+32) || (*ptr2 == *ptr1-32))
            {
                flag=1;
                diff++;
                break;
            }
            
            //printf("%c",*ptr);
            
            ptr2++;
        }
        
        ptr1++;
    }
    printf("\n Difference : %d ",diff);
    if(flag == 1)
    {
        return 0;
    }
    else
    {
        return diff;
    }
}

int main()
{
    char str1[]="India iS My First love";
    char str2[]="India is my firST love";
    char *str3 ="India is my country love";
    
    int result=-1;
    
    result=strIcmpx(str1,str2);
    if(result==0)
        printf("\n1 & 2 Equal \n");
    else
        printf("\n1 & 2 Not equal \n");
    
    result=strIcmpx(str1,str3);
    if(result==0)
        printf("\n1 & 3 Equal \n");
    else
        printf("\n1 & 3 Not equal \n");
    
    printf("\n");
    return 0;
}

