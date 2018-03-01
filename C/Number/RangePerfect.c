//
//  CheckPerfect.c
//
//
//  Created by Pratik Bali on 16/01/18.
//

#include <stdio.h>

void CheckPerfect(int iStart, int iEnd)
{
    int icnt = 1, iSum = 0, iNo = 0 ;

    //debug<
    //printf(" iStart = %d\n", iStart);
    //printf(" iEnd = %d\n", iEnd);
    //debug>
    
    for(iNo = iStart; iNo <= iEnd; iNo++ )
    {
        iSum = 0;
        icnt = 1;
        
        while(icnt <= iNo/2)
        {
            //debug<
            //printf(" \t%d", icnt);
            //debug>
            if((iNo % icnt) == 0 )
            {
                iSum = iSum + icnt;
                //debug<
                //printf(" iSum = %d\n", iSum);
                //debug>
                
            }
            
            icnt++;
        }
        if(iSum == iNo)
           printf("\n\n\t%d\n\n", iNo);
    }
   
    printf("\n\n");
}


int main(int argc, char*argv[])
{
    int iValue1 = 0, iValue2 =0 ;
    
    printf("\n Enter Range : ");
    scanf("%d %d",&iValue1,&iValue2);
    
   CheckPerfect(iValue1,iValue2);
    
}


