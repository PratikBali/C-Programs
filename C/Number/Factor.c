#include<stdio.h>

//Behaviours

void Factor(int iNo)
{
    int i = 0;
    for(i = 1; i <= iNo/2; i++)
    {
        if(iNo % i == 0)
        {
            printf(" %d ",i);
        }
    }
}
int main()
{
    int iNo = 0, ans = 0;
    
    printf("\n Enter Number : ");
    scanf("%d",&iNo);
    
    Factor(iNo);
    
    return 0;
}
