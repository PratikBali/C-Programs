//
//  PrimeFactor.c
//  
//
//  Created by Pratik Bali on 16/01/18.
//

#include <stdio.h>

void CheckPrime(int iNo)
{
    int i = 2, flag = 0;
    
    //printf("\nPrime factor : ");
    
    while(i <= iNo/2)
    {
        if((iNo % i) == 0)
        {
            flag = 1;
            break;
        }
        i++;
    }
    if(flag == 0)
    {
        printf(" %d ",iNo);
    }
    else
    {
        return;
    }
}

void PrimeFactor(int iNo)
{
    int i = 0;
    
    printf("\nPrime factors : ");
    for(i=1; i<=iNo/2; i++)
    {
        if((iNo % i) == 0)
        {
            //printf("\nFactor found : %d ",i);
            
            CheckPrime(i);
        }
    }
}

int main()
{
    int iValue = 0;
    
    printf("\nEnter Number : ");
    scanf("%d",&iValue);
    
    PrimeFactor(iValue);
    printf("\n\n");
}
