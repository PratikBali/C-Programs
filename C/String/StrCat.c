// Implementing the strcat()

#include<stdio.h>

//Behaviours
void strcatx(char *ptr1,char *ptr2)
{
    while(*ptr1!='\0')
    {
        ptr1++;
    }
printf("%c",*ptr1);
    while(*ptr2!='\0')
    {
        //printf("%c",*ptr1);
        //printf("%c",*ptr2);
        
        *ptr1=*ptr2;
        
        ptr1++;
        ptr2++;
    }
    *ptr1 = '\0';
    
}

int main()
{
    char str1[]="India is my first love";
    char str2[]="Thanks";
    
    strcatx(str1,str2);
    
    char *ptr = str1;

        printf("%s",str1);

    printf("\n");
    return 0;
}

