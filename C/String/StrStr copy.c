#include<stdio.h>

//Behaviours
/*char* strstrx(char *src,char *dest)
{
    int i=0,j=0,flag=0;
    
    if((NULL==src) || (NULL==dest))
        return NULL;
    
    for(i=0;dest[i]!='\0';i++)
    {
       if(src[0] == dest[i])
       {
           for(j=i; ;j++)
           {
               if(src[j-i] == '\0')
               {
                   flag = 1;
                   break;
               }
               if(dest[j] == src[j-i])
                   continue;
               else
                   break;
           }
       }
        if(flag == 1)
            break;
   }
    if(flag)
        return (dest + i);
    else
        return NULL;
}*/

char* strstrx(char *src,char *dest)
{
    int i=0,j=0,flag=0;
    
    if((NULL==src) || (NULL==dest))
        return NULL;
    
    for(i=0;dest[i]!='\0';i++)
    {
        flag = 0;
        
        for(j=i;src[j-i]!='\0' ;j++)
        {
            flag=0;
            
            if(src[j-i] == dest[j])
            {
                printf("\n matched : %c,%c  ",src[j-i],dest[j]);
                flag = 1;
            }
            else
            {
                printf("\n inside else : %c != %c  ",src[j-i],dest[j]);
                break;
            }
        }
        printf(" flag : %d \n",flag);
        if(flag == 1)
        {
            printf("\n inside flag  \n");
            break;
        }
    }
    
    if(flag==1)
        return (dest + i);
    else
        return NULL;
}


/*char* strstrx(char *src,char *dest)
{
    int i=0,j=0,flag=0;
    
    if((NULL==src) || (NULL==dest))
        return NULL;
    
    for(i=0;dest[i]!='\0';i++)
    {
        flag=0;
        for(j=0;src[i]!='\0';j++)
        {
            if(src[0] == dest[i])
            {
                    flag = 1;
                    break;
            }
        }
        if(flag == 1)
            return (dest + 1);
    }
    return NULL;
}*/

int main()
{
    char str1[]="first";
    char str2[]="India is my first love";
    char *ptr1=NULL;
    
    ptr1 = strstrx(str1,str2);
    if(ptr1!=NULL)
        printf("\n String found : %s\n",ptr1);
    else
                printf("\n not found \n");
    return 0;
}
