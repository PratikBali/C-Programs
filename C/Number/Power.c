//
//  Power.c
//  
//
//  Created by Pratik Bali on 16/01/18.
//

#include <stdio.h>

long CalcPower(int iNo1, int iNo2)
{
    int power = 1, iCounter = 0;
    
    while(iCounter < iNo2)
    {
        iCounter++;
        
        power = power * iNo1;
    }
    
    return power;
}
int main()
{
    int iValue,carry;
    long ret = 0;
    
    printf("Enter number and rest to : ");
    scanf("%d%d",&iValue,&carry);
    
    ret = CalcPower(iValue,carry);
    printf("Power of %d ^ %d : %ld \n\n",iValue,carry,ret);
}
