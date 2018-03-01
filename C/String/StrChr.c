#include<stdio.h>

//Behaviours
int StrChrX(char *ptr, char ch)
{
    if(ptr==NULL)
    {
        return -1;
    }
    while(*ptr!='\0')
    {
         
        if(*ptr == ch)
        {
            break;
        }
        ptr++;
    }
    if(*ptr == '\0')
        return -1;
    else
        return 1;
}

int main()
{
    char str[100];
    char ch='z';
    int ret=0;
    
    printf("Enter String : ");
    scanf("%s",str);
     while ((getchar()) != '\n');

    printf("Enter character : ");
    ch = getchar();
   
    ret = StrChrX(str,ch);
    
    if(ret == -1)
        printf("\n Character occurrence not found in string.\n");
    else
        printf("\nCharacter occurrence found ");

    return 0;
}
