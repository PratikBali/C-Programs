//
//  DigitCount.c
//  
//
//  Created by Pratik Bali on 16/01/18.
//

#include <stdio.h>

int DigitCount(long iNo)
{
    int iTemp = iNo, iDigit = 0, iCnt = 0;
    
    while(iTemp != 0)
    {
        iCnt++;
        iDigit = iTemp % 10;
        iTemp = iTemp/10;
    }
    return iCnt;
}

int main()
{
    long iValue = 0;
    int iRet = 0;
    
    printf("\n Enter Number : ");
    scanf("%ld",&iValue);
    
    iRet =  DigitCount(iValue);
    
    printf("\n Number of digits are : %d",iRet);
    
    printf("\n\n");
    return 0;
}
