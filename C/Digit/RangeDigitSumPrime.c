//
//  RangeDigitSumPrime.c
//  
//
//  Created by Pratik Bali on 16/01/18.
//

#include <stdio.h>

int PrintPrime(int iNo)
{
    int i = 0, flag = 0;
    for(i = 2; i <= iNo/2; i++)
    {
        if((iNo % i) == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
       return 1;
    else
        return 0;
}

void DigitSum(int iStart, int iEnd)
{
    int i = 0, temp = 0, digit = 0, sum = 0, ret = 0;
    for(i = iStart; i <= iEnd; i++)
    {
        printf("\n check : %d ",i);
        temp = i;
        sum = 0;
        while(temp != 0)
        {
            digit = temp % 10;
            sum = sum + digit;
            temp = temp / 10;
        }
        
        printf("\n\t sum : %d ",sum);
        ret = PrintPrime(sum);
        if(ret == 1)
            printf("\n\t\t prime : %d ",i);
    }
    return;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    
    printf("\n Enter Range : ");
    scanf("%d%d",&iValue1,&iValue2);
    
    DigitSum(iValue1,iValue2);
    
    return 0;
}
