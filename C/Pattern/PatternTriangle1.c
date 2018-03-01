//
//  Pattern1234.c
//  
//
//  Created by Pratik Bali on 18/01/18.
//

#include <stdio.h>
#include <time.h>

void PrintPattern(int iRow, int iCol)
{
    int i = 0, j= 0;
    
    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j <= i; j++)
        {
            printf("\t * ");
        }
        printf("\n");
    }
    
}

int main()
{
    clock_t start,end;
    double time;
    start = clock();
    
    int iNo1 = 0, iNo2 = 0;
    
    printf("\nEnter row and column Respectively : ");
    scanf("%d%d",&iNo1,&iNo2);
    
    PrintPattern(iNo1,iNo2);
    
    end = clock();
    time = ((double) (end - start)) / CLOCKS_PER_SEC;
    
    printf("\n\n Time required to execute : %f \n\n",time);
    
    return 0;
}
