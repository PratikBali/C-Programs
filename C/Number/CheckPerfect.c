//
//  CheckPerfect.c
//  
//
//  Created by Pratik Bali on 16/01/18.
//

#include <stdio.h>

int CheckPerfect(int iNo)
{
    int icnt = 1, iSum = 0 ;
    //debug<
     printf("\n Inside def \n ");
     printf(" iNo = %d\n", iNo);
    //debug>
    while(icnt <= iNo/2)
    {
        //debug<
        printf(" \t%d", icnt);
        //debug>
        if((iNo % icnt) == 0 )
        {
            iSum = iSum + icnt;
            //debug<
            printf(" iSum = %d\n", iSum);
             //debug>
           
        }
        
        icnt++;
    }
    if(iSum == iNo)
        return 1;
    else
        return 0;
    
}


int main(int argc, char*argv[])
{
    int iValue = 0;
    
    printf("\n Enter number : ");
    scanf("%d",&iValue);
    
   
        int ret = CheckPerfect(iValue);
        if (ret == 1)
            printf("\n Perfect \n");
        else printf("\n Not Perfect \n");
    
}

