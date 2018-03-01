//
//  SumDigitDiv.c
//  
//
//  Created by Pratik Bali on 16/01/18.
//

#include <stdio.h>

void DigitSumDiv(int iNo)
{
    int digit = 0, sum = 0;
    while(iNo !=0 )
    {
        digit = iNo % 10;
        sum = sum + digit;
        iNo = iNo / 10;
    }
    printf("\n Sum of digits : %d \n",sum);
    if((sum % 3) == 0)
        printf(" %d is divisible by 3\n\n",sum);
    else
         printf(" %d is not divisible by 3\n\n",sum);
}
int main()
{
    int iValue = 0;
    
    printf("\n Enter number : ");
    scanf("%d",&iValue);
    
    DigitSumDiv(iValue);
    
    return 0;
}
