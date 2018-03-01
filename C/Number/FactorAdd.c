/**
 * Accept Number
 * Print Summation of factors
 * Print Summation of non factors
 *
 **/

#include<stdio.h>

void Factor(int iNo)
{
    int i = 0, iSum1 = 0, iSum2 = 0;
    static int  j = 0, k = 0;
    int arr[100],brr[100];
    
    for(i = 1; i <= iNo/2; i++)
    {
        if(iNo % i == 0)
        {
            arr[j]=i; j++;
            iSum1 = iSum1 + i;
        }
        else
        {
            brr[k]=i; k++;
            iSum2 = iSum2 + i;
        }
    }
    
    printf("\n Factors : ");
    for(i = 0; i < (j+1); i++)
        printf(" %d",arr[i]);
    
    printf("\n Non factors : ");
    for(i = 0; i < (k+1); i++)
        printf(" %d",brr[i]);
    
     printf("\n\n Sum of factors : %d",iSum1);
     printf("\n Sum of non factors : %d \n\n",iSum2);
}
int main()
{
    int iNo = 0, ans = 0;
    
    printf("\n Enter Number : ");
    scanf("%d",&iNo);
    
    Factor(iNo);
    
    return 0;
}
