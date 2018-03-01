//
//  CheckPrime.c
//  
//
//  Created by Pratik Bali on 16/01/18.
//

#include <stdio.h>

int CheckPrime(int iNo)
{
    int icnt = 2, flag = 0 ;
    
    while(icnt <= iNo/2)
    {
        if((iNo % icnt) == 0 )
        {
            //debug<
            printf("\n Factor found : %d \n", icnt);
            //debug>
            flag = 1;
            break;
        }
        
        icnt++;
    }
    if(flag == 0)
        return 1;
    else
        return 0;
    
}
int main()
{
    int iValue = 0;
    
    printf("\n Enter number : ");
    scanf("%d",&iValue);
    
    
    int ret = CheckPrime(iValue);
    if (ret == 1)
        printf("\n Prime \n\n");
    else printf("\n Not Prime \n\n");
    return 0;
}
