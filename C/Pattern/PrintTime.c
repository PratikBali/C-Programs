//
//  PrintTime.c
//  
//
//  Created by Pratik Bali on 18/01/18.
//

#include <stdio.h>
#include <time.h>

int main()
{
    clock_t start,end;
    double time;
    start = clock();
    
    printf("\n Hello World \n");
    
    end = clock();
    time = ((double) (end - start)) / CLOCKS_PER_SEC;
    
    printf("\n\n Time required to execute : %f \n\n",time);
}
