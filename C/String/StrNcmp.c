//
//  StrNcmp.c
//  
//
//  Created by Pratik Bali on 18/01/18.
//

#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

//Behaviours
BOOL strNcmpx(char *ptr1,char *ptr2,int pos)
{
    int flag = 0,icnt = 0;
    while(*ptr1!='\0' && pos != 0)
    {
        flag=0;
        
        while(*ptr2!='\0')
        {
            if(*ptr2 == *ptr1)
            {
                flag=1;
                icnt++;
                break;
            }
            
            //printf("%c",*ptr);
            
            ptr2++;
        }
        
        ptr1++;
        pos--;
    }
    printf("\n icnt : %d ",icnt);
    if(flag==1)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char str1[]="India is my first love";
    char str2[]="India is my first love";
    char *str3 ="India is my country love";
    BOOL result=FALSE;
    
    result=strNcmpx(str1,str2,5);
        if(result==TRUE)
            printf("\n1 & 2 Equal \n");
        else
            printf("\n1 & 2 Not equal \n");
    
    result=strNcmpx(str1,str3,13);
        if(result==TRUE)
            printf("\n1 & 3 Equal \n");
        else
            printf("\n1 & 3 Not equal \n");
    
    printf("\n");
    return 0;
}
