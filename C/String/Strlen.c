// Implementing the strlen()

#include<stdio.h>

//Behaviours
int strlenx(char *ptr1)
{
    int size = 0;
    while(*ptr1!='\0')
    {
        size++;
        ptr1++;
    }
 
    return size;
}

int main()
{
    char str1[]="India is my first love";
    int len=0;
    
    len=strlenx(str1);
    
    printf("length of string is : %d",len);
    printf("\n");
    return 0;
}
