// Implementing the strcmp()

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

//Behaviours
BOOL strcmpx(char *ptr1,char *ptr2)
{
    int flag = 0;
    while(*ptr1!='\0')
    {
        flag=0;
        
        while(*ptr2!='\0')
        {
            if(*ptr2 == *ptr1)
            {
                flag=1;
                break;
            }
            //printf("%c",*ptr);
        
            ptr2++;
        }
        if(ptr2=='\0')
        {
            flag = 0;
            break;
        }
        ptr1++;
    }
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
    char str2[]="India is my country love";
    BOOL result=FALSE;
    
    strcmpx(str1,str2);

    result=strcmpx(str1,str2);
    
    if(result==TRUE)
    {
        printf("Equal \n");
    }
    else
    {
        printf("Not \n");
    }
    
    printf("\n");
    return 0;
}
