#include <stdio.h>
#include <time.h>

void PrintPattern(int iRow)
{
    int i = 0, j= 0 , iCol = iRow;
    
    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iRow; j++)
        {
            if(j <= i)
            {
                printf(" * ");
                
            }
            else
            {
                printf("   ");
            }
        }
        iCol--;
        for(j = 0; j < iRow; j++)
        {
            if(j < iCol)
            {
                printf("   ");
                
            }
            else
            {
                printf(" * ");
            }
        }
        printf("\n");
    }
}

int main()
{

    int iNo = 0;
    
    //printf("\nEnter rows : ");
    //scanf("%d",&iNo);
    
    PrintPattern(5);

    return 0;
}
