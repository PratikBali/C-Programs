//
//  CheckArmstrong.c
//  
//
//  Created by Pratik Bali on 16/01/18.
//

#include <stdio.h>
#include <string.h>

int CheckArmstrong(int iNo)
{
    int i = 0, iValue = iNo, iDigit = 0, iCnt = 0, iPower = 0, iSum = 0;
    
    //Count the digits
    while(iValue != 0)
    {
        iDigit = iValue % 10;
        iValue = iValue / 10;
        iCnt++;
    }
     //printf("\nTotal digit %d",iCnt);
    
    iValue = iNo;
    
 
    //for separating digit
    while(iValue != 0)
    {
        iDigit = iValue % 10;           //separate last digit
        i = 1;                          //set i=1 for iteration digit power
        iPower = 1;                     //set power=1 for new power of each digit
        while(i <= iCnt)                //iterate till total count of digit
         {
             iPower = iPower * iDigit;  //calculate factorial of each digit
             i++;                       //increment i till icnt
         }
        iSum = iSum + iPower;           //calculate sum of power of all digit
        
        iValue = iValue / 10;
    }
    
    if(iSum == iNo)
        return 1;
    else
        return 0;
    
    
    return 1;
}
int main()
{
    int iValue;
    printf("\n Enter Number : ");
    scanf("%d",&iValue);fflush(stdin);
   // printf("\n %s",iValue);
    //printf("\n %d",iValue);
    //char *ptr = (char*)iValue;
    //printf("\n size : %lu",strlen(iValue));
    
    int ret = CheckArmstrong(iValue);
    if(ret == 1)
        printf("\n Armstrong\n\n");
    else printf("\n Not Armstrong\n\n");
    
    return 0;
}
