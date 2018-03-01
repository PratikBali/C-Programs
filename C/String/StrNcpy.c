// Implementing the strcpy()

#include<stdio.h>

//Behaviours
void strncpyx(char *ptr1,char *ptr2,int pos)
{
    int iCnt = 0;
    char *ptr = ptr2;
    
    while((*ptr1!='\0'))
    {
        *ptr2 = *ptr1;
        //printf(" %c",*ptr2);
        ptr1++;
        ptr2++;
        iCnt++;
        if(iCnt == pos)
        {
            *ptr2 = '\0';
            break;
        }
    }
    
   
 
}

int main()
{
    char str1[1024];
    char str2[]="";
    int pos = 0;
    
    printf("\n Enter String : ");
    scanf("%[^'\n']s",str1);
  
    printf("\n Enter total no of chars to copy : ");
    scanf("%d",&pos);
    
    strncpyx(str1,str2,pos);
    
    char *ptr = str2;
    while(*ptr!='\0')
    {
       // printf("%c",*ptr);
        ptr++;
    }
    //another way of printing whole string
    //printf("\n %s",str1);
    puts(str2);
    
    printf("\n");
    return 0;
}
