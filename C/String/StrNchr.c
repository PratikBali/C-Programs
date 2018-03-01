#include<stdio.h>

//Behaviours
int StrChrX(char *ptr, char ch)
{
    int pos = 0,icnt = 1;
    
    if(ptr==NULL)
    {
        return -1;
    }
    while(*ptr!='\0')
    {
        
        if(*ptr == ch)
        {
            pos = icnt;
        }
       
        printf("\n %c ",*ptr);
         printf(" %c ",ch);
         printf(" %d ",icnt);
        printf(" %d ",pos);

        icnt++;
        ptr++;
    }
    if(pos == 0)
        return -1;
    else
        return pos;
}

int main()
{
    char str[100];
    char ch;
    int ret=0;
    
    printf("Enter String : ");
    gets(str);
    printf("Enter character : ");
    scanf("%c",&ch);
    
    ret = StrChrX(str,ch);
    
    if(ret == -1)
        printf("\n Character occurrence not found in string.\n");
    else
        printf("\n Last Character occurrence found at %d position.\n",ret);
    
    return 0;
}

