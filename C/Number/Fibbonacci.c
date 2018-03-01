//
//  Fibbonacci.c
//  
//
//  Created by Pratik Bali on 16/01/18.
//

#include <stdio.h>

void PrintFibbonacci(int iNo)
{
    int i,sum,prev,next;
    
    i=sum=prev=0;
    next=1;
    
    //printf(" %d",sum);
    for ( i=0; i<=iNo; i++)     //iterate till i=iNo
    {
        if(i <= 1)
        {
            sum = i;            //for 0 and 1 printing
        }
        else
        {
            sum = prev + next;  //sum of previous number and next number
            prev = next;        //set previous as next
            next = sum;         //set next as sum
        }
        printf(" %d",sum);      //print sum
    }
    printf(" \n\n");
}

int main()
{
    int iValue = 0;
    printf("\nEnter total to print fibbonacci series : ");
    scanf("%d",&iValue);
    
    PrintFibbonacci(iValue);
    
    return 0;
}
