//
//  Pattern1234.c
//  
//
//  Created by Pratik Bali on 18/01/18.
//

#include <stdio.h>

void PrintPattern(int iRow, int iCol)
{
    int i = 0, j= 0;
    
    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j <= iCol; j++)
        {
            if((j>0 && j<iCol) && (i>0 && i<iCol-1))
            {
                printf("\t  ");
            }
            else
            {
                printf("\t * ");
            }
        }
        printf("\n");
    }
    
}

int main()
{
    int iNo1 = 0, iNo2 = 0;
    
    printf("\nEnter row and column Respectively : ");
    scanf("%d%d",&iNo1,&iNo2);
    
    PrintPattern(iNo1,iNo2);
    return 0;
}

/**
 
 void PrintPattern(int iRow, int iCol)
 {
 int i = 0, j= 0;
 
 for(i = 0; i < iRow; i++)
 {
 for(j = 0; j <= i; j++)
 {
 if((j>0 && j<i) && (i>0 && i<iCol-1))
 {
 printf("\t -");
 }
 else
 {
 printf("\t * ");
 }
 }
 printf("\n");
 }
 
 }
 
 **/
