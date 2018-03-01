//When the sum of the factorial of a number's individual digits are equal to the number itself, then that number is called a strong number.  
//Example: 145 since 1! + 4! + 5! = 1 + 24 + 120 = 145.

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkStrong(int iNo) 
{
    int iSum = 0, iDigit = 0, iFact = 1, iTemp = iNo;
    
    while(iTemp != 0)
    {
        iDigit = iTemp % 10;            //separate each digit
        while(iDigit != 0)              //iterate till digit=0
        {
            iFact = iFact *  iDigit;    //calculate factorial of each digit
            iDigit--;                   //decrement digit by 1
        }
        iSum = iSum + iFact;            //calculate sum of factorial of all digit
        iFact = 1;
        iTemp = iTemp / 10;             //break number by 1 position
    }
    if(iNo == iSum) 
    {
        return TRUE ;
    } 
    else 
    {
        return FALSE;
    } 
}

int main()
{   
    int val = 0;
    BOOL ret = FALSE;
    
    printf("\n Enter The number : ");
    scanf("%d",&val);
    ret = ChkStrong(val);
    
    if(ret == TRUE) 
    {
        printf("\n %d is Strong number  ",val);;
    } 
    else 
    {
        printf("\n %d is Not Strong number  ",val);;
    } 
    return 0;
}
