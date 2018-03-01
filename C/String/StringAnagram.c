#include<stdio.h>
#include<string.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckAnagram(char first[],char second[])
{
    int i=0,j=0,k=0,flag=0;
   
    int len1 =strlen(first);
    int len2 =strlen(second);
    
    if(len1!=len2)
    {
        return FALSE;
    }
    

    for(i=0;i<len1;i++)
    {
        k=0;
        for(j=0;j<len2;j++)
        {
            if(first[i]==second[j])
            {
                k=1;
                break;
            }
        }
        if(j==len2)
        {
            break;
        }
        
    }
    if(k==1)
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
    char  arr[]="asdfg";
    char  brr[]="ashfg";
    
    
    BOOL iret=FALSE;
    iret=CheckAnagram(arr,brr);
    
    if(iret==TRUE)
    {
        printf("\n Anagram");
    }
    else
    {
        printf("Not anagram");
    }
    return 0;
    
}
