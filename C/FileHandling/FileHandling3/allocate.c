#include<stdio.h>
#include<stdlib.h>


int main()
{
    int *arr = NULL;
    int k = 0;
    
    arr = (int*) malloc (1024 * sizeof(int));
    printf("%lu\n",sizeof(arr));
    
    for(k = 0; k < 1024; k++)   //Byte
    {
        arr[k] = 1;
    }
    
    printf("%s\n",arr);
    return 0;
}
