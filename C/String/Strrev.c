// Implementing the strrev()


#include<stdio.h>
#include<string.h>

//Behaviours
void strrevx(char arr[])
{
    int i=0;
    int j=strlen(arr);
    j=j-1;
    char temp;
    
    while(i<=j)
    {
        //printf("\n %c",arr[i]);
        //printf("%c",arr[j]);
        
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        
        //printf(" %c",arr[i]);
        //printf("%c",arr[j]);
        
        i++;
        j--;
    }
    
}

int main()
{
    char str[] = "india is great";
    strrevx(str);
    printf("%s",str);
     //printf("\n\n");
    //puts(str);
    
    return 0;
}
