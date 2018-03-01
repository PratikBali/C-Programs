//
//  Perfect.c
//  
//
//  Created by Pratik Bali on 03/01/18.
//

#include <stdio.h>

int Factor(int iNo)
{
    int i = 0, iSum1 = 0;
 
    for(i = 1; i <= iNo/2; i++)
    {
        if(iNo % i == 0)
        {
             printf(" %d ",i);
            iSum1 = iSum1 + i;
        }
    }
     printf("\n %d ",iSum1);
    if(iNo == iSum1)
    {
        return 1;
    }
    else    {
        return 0;
    }
}
int main()
{
    int iNo = 0, iRet = 0;
    
    printf("\n Enter Number : ");
    scanf("%d",&iNo);
    
    iRet = Factor(iNo);
    
    if(iRet == 0)
    {
          printf("\nNot ");
    }
    else    {
           printf("\n Yes ");
    }
    
    return 0;
}
