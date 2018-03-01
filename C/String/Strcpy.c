// Implementing the strcpy()

#include<stdio.h>

//Behaviours
void strcpyx(char *ptr1,char *ptr2)
{
    while(*ptr1!='\0')
    {
        *ptr2 = *ptr1;
        //printf("%c",*ptr);
        ptr1++;
        ptr2++;
    }
}

int main()
{
    char str1[]="India is my first love";
    char str2[]="";
    
    strcpyx(str1,str2);
    
    char *ptr = str2;
    while(*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    // another way of printing whole string
    //printf("\n %s",str1);
    //puts(str1);
    
    printf("\n");
    return 0;
}
