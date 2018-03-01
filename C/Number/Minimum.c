#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size=0;
    int *arr=NULL;
 //   int min=0;
    int i=0;
    
    printf("Enter size : ");
    scanf("%d",&size);
    
    arr = (int*)malloc(size*sizeof(int));
    
    for(i=0;i<size;i++)
    {
        printf("\nEnter %d : ",i);
        scanf("%d",&arr[i]);
    }
    
   int min=arr[0];
    printf("---->%d:",min);
    for(i=0;i<5;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    
    printf("\nMinimum is : %d ",min);
        
}
