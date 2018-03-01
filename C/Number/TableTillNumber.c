//
//  Table.c
//  
//
//  Created by Pratik Bali on 03/01/18.
//  printf("\n\n ");
//

#include <stdio.h>

void PrintTable(int);
int main()
{
    int iNo = 0;
    printf("\n Enter Number to print its table :  ");
    scanf("%d",&iNo);
    
    PrintTable(iNo);
    
    return  0;
}

void PrintTable(int iVal)
{
    int iAns = 0, i = 0, j = 0, icnt = 0;
    printf("\n Table For '%d' is : ",iVal);
    
    for(i=1;i<=iVal;i++)
    {
        icnt++;
            
        printf("\n");
        for(j=1;j<=10;j++)
        {
            iAns = i * j;
            printf("\t %d ",iAns);
        }
    }
    printf("\n\n ");
}
