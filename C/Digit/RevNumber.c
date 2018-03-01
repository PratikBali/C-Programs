//
//  RevNumber.c
//  
//
//  Created by Pratik Bali on 16/01/18.
//

#include <stdio.h>

int RevNumber(long iNo)
{
    int iTemp = iNo, iDigit = 0, iRev = 0;
    
    while(iTemp != 0)
    {
        iDigit = iTemp % 10;
        iRev = (iRev*10) + iDigit;
        iTemp = iTemp/10;
    }
    return iRev;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("\n Enter Number : ");
    scanf("%d",&iValue);
    
    iRet =  RevNumber(iValue);
    
    printf("\n  Reverse of %d is : %d",iValue, iRet);
    
    printf("\n\n");
    return 0;
}
