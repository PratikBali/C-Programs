//
//  DigitAtEvenPos.c
//  
//
//  Created by Pratik Bali on 16/01/18.
//

#include <stdio.h>

void RevNumber(long iNo)
{
    int iTemp = iNo, iDigit = 0, iRev = 0, iCnt = 0;
    
    while(iTemp != 0)
    {
        iDigit = iTemp % 10;
        iRev = (iRev*10) + iDigit;
        iTemp = iTemp/10;
    }
    iTemp = iRev;
    while(iTemp != 0)
    {
        iDigit = iTemp % 10;
        iCnt++;
        if((iCnt % 2) == 0)
            printf(" %d",iDigit);
        iTemp = iTemp/10;
    }
   
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("\n Enter Number : ");
    scanf("%d",&iValue);
    
    RevNumber(iValue);
    
    
    printf("\n\n");
    return 0;
}
