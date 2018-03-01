#include<stdio.h>

int Factorial(int iNo)
{
	int iAns = 1;
	while(iNo != 0) 
	{
        iAns = iAns * iNo;
		iNo-- ; 
	}
	return iAns; 
}

int main()
{
    int iNo = 0, ans = 0;
    
    
    printf("\n Enter Number : ");
    scanf("%d",&iNo);
    
    ans = Factorial(iNo);
    printf("\n Ffactorial : %d ",ans);
    
    return 0;
}
