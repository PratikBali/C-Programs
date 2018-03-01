//
//  CheckPlindrome.c
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
    if(iRev == iNo)
        return 1;
    else
        return 0;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("\n Enter Number : ");
    scanf("%d",&iValue);
    
    iRet =  RevNumber(iValue);
    
    if(iRet == 1)
        printf("\nPalindrome\n");
    else
        printf("\nNot Palindrome\n");

    printf("\n\n");
    return 0;
}
