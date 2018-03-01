//
//  DigitSum.c
//  
//
//  Created by Pratik Bali on 16/01/18.
//

#include <stdio.h>

int DigitSum(long iNo)
{
    int iTemp = iNo, iDigit = 0, iCnt = 0, iSum = 0;
    
    while(iTemp != 0)
    {
        iCnt++;
        iDigit = iTemp % 10;
        iSum = iSum + iDigit;
        iTemp = iTemp/10;
    }
    return iSum;
}

int main()
{
    long iValue = 0;
    int iRet = 0;
    
    printf("\n Enter Number : ");
    scanf("%ld",&iValue);
    
    iRet =  DigitSum(iValue);
    
    printf("\n Sum of digits are : %d",iRet);
    
    printf("\n\n");
    return 0;
}
