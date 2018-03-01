//
//  Student.c
//  
//
//  Created by Pratik Bali on 07/01/18.
//

#include "Header.h"
#include "FileHelper.h"


int size=0, i=0;
void Accept(char *name)
{
    STUDENT stud;
    int fd = OpenFileWR(name);
    
    printf("How many students :");
    scanf("%d",&size);
    printf("total students : %d",size);
    
    for(i=0; i<size; i++)
    {
        printf("\n Enter student %d roll number :",i+1);
        scanf("%d",&stud.roll);
        //printf("Student roll : %d ",stud.roll);
        fflush(stdin);
        printf("Enter student %d name :",i+1);
        scanf("%s",&stud.name);
        //printf("Student name : %s \n",stud.name);
        //while (getchar() != '\n')
       write(fd,&stud,sizeof(stud));
        memset(&stud,0,sizeof(stud));
    }
    close(fd);
    return ;
}

int main()
{
    Accept("info.txt");
    
    printf("\n Accept call Complete ");

    return 0;
}
