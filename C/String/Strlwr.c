//Implementing strlwr() & strupr()

#include <stdio.h>

void strlwrx(char brr[])
{
    char *ptr = brr;
    
    while((*ptr)!='\0')
    {
        if((*ptr>='A') && (*ptr<='Z'))
        {
            *ptr=(*ptr)+32; //for strupr use -32
        }
        ptr++;
    }
}

int main()
{
    char arr[]={'A','Z','K','L','D','S'};
    
    strlwrx(arr);
    
    char *ptr = arr;
    printf("\n lowercase array is: \n");
    while((*ptr)!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    printf("\n\n");

    return 0;
}


