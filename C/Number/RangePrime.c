//
//  RangePrime.c
//
//
//  Created by Pratik Bali on 16/01/18.
//

#include <stdio.h>

void RangePrime(int iStart, int iEnd)
{
    int icnt = 1, iSum = 0, iNo = 0 ;
    
    //debug<
    //printf(" iStart = %d\n", iStart);
    //printf(" iEnd = %d\n", iEnd);
    //debug>
    
    for(iNo = iStart; iNo <= iEnd; iNo++ )
    {
        int icnt = 2, flag = 0 ;
        
        while(icnt <= iNo/2)
        {
            if((iNo % icnt) == 0 )
            {
                //debug<
                //printf("\n Factor found : %d \n", icnt);
                //debug>
                flag = 1;
                break;
            }
            
            icnt++;
        }
        if(flag == 0)
            printf("\t%d\n", iNo);
        
    }
    
    printf("\n\n");
}


int main()
{
    int iValue1 = 0, iValue2 =0 ;
    
    printf("\n Enter Range : ");
    scanf("%d %d",&iValue1,&iValue2);
    
    RangePrime(iValue1,iValue2);
    
}



