#include<stdio.h>
#include<string.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

//Behaviours
BOOL CheckPalindrome(char arr[])
{
    int i=0,flag=0;;
    int j=strlen(arr);
    j=j-1;
    char temp;
    char rev[70];
    
    while(j>=0)
    {
        rev[i]=arr[j];

        i++;
        j--;
    }
    //puts(rev);
    i=0;
    //printf("%c",arr[i]);
    while(arr[i]!='\0')
    {
        //printf("inside 2nd while");
        flag=0;
        if(rev[i]!=arr[i])
        {
            //printf("%c",rev[i]);
            //printf("%c",arr[i]);
            flag=1;
            break;
        }
        i++;
    }
    if(flag==1)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
    
}

int main()
{
    char str[] = "madam";
    BOOL iret = CheckPalindrome(str);
    //puts(str);
    
    if(iret==TRUE)
    {
        printf("String is Palindrome \n");
    }
    else
    {
        printf("Not \n");
    }
    return 0;
}
