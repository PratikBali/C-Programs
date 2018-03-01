//
//  strWrev.c
//  
//
//  Created by Pratik Bali on 18/01/18.
//

#include <stdio.h>

#include<string.h>

//Behaviours
void strNrev(char arr[])
{
    int i = 0, j = 0, k = 0;
    char temp;
    printf(" \n <breakpoint 2> \n");

    while(arr[i] != '\0')
    {
        //printf(" \n <breakpoint 3> \n");
       // printf(" %c",arr[i]);
        if(arr[i] == ' ')
        {
            while(arr[i] == ' ' && arr[i] != '\0' )
                i++;
        }
        else
        {
            j=0;
            //printf("\n start : %c",arr[i]);
            while(arr[i] != ' ' && arr[i] != '\0' )
            {
                i++;
                j++;
            }
            printf("\n i : %d",i);//5
            printf("\n j : %d",j);//5

            k=j;//5
            i=i-j;//0
            j--;//4
            while(i < j)
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                
                i++;
                j--;
                printf("\n\t inner i : %d",i);//
            }
            i=(i+k);//5
            printf("\n\t 2i : %d",i);//7
            printf("\n\t 2j : %d",j);//2

        }
    }
}

int main()
{
    char str[] = "india is great";
    
    printf(" \n <breakpoint 1> \n");
    strNrev(str);
    printf("\n %s \n",str);
    //printf("\n\n");
    //puts(str);
    
    return 0;
}
