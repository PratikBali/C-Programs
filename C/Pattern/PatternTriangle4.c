//
//  Pattern1234.c
//  
//
//  Created by Pratik Bali on 18/01/18.
//

#include <stdio.h>
#include <time.h>

void PrintPattern(int iRow)
{
    int i = 0, j= 0 , iCol = iRow;
    
    for(i = 0; i < iRow; i++)
    {
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
    clock_t start,end;
    double time;
    start = clock();
    
    int iNo = 0;
    
    printf("\nEnter rows : ");
    scanf("%d",&iNo);
    
    PrintPattern(iNo);
    
    end = clock();
    time = ((double) (end - start)) / CLOCKS_PER_SEC;
    
    printf("\n\n Time required to execute : %f \n\n",time);
    
    return 0;
}
