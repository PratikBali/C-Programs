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
    int iAns = 0, i = 0;
    printf("\n Table For '%d' is : ",iVal);
    
    for(i=1;i<=10;i++)
    {
        iAns = iVal * i;
        printf("\n %d ",iAns);
    }
    printf("\n\n ");
}
