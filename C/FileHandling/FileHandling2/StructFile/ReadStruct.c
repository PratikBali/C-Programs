//
//  ReadFileStruct.c
//  
//
//  Created by Pratik Bali on 11/01/18.
//

#include "Header.h"
#include "FileHelper.h"

void Display(char *name)
{
    STUDENT stud;
    char arr[50];//*arr;//
    int ret = 0, fd = 0, rno = 0, size = 0;
    
    fd = OpenFileRD(name);
    //size = FileSize(fd);
    // arr = (char*)malloc(size);
    
    while((ret = read(fd,&stud,sizeof(stud))) != 0)
    {
        strcpy(arr,stud.name);
        rno = stud.roll;
        if(*arr != NULL)
            printf("\n roll : %d\t Name : %s",rno,arr);
    }
    printf("\n ");
    close(fd);
}

int main()
{
    Display("info.txt");
    
    return 0;
}
