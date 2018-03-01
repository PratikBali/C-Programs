//
//  Student.c
//  
//
//  Created by Pratik Bali on 07/01/18.
//

#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>

typedef  struct student
{
    int roll;
    char name[50];
}
STUDENT;

void Display()
{
    int fd = 0, ret = 0;
    STUDENT stud;
 
    fd = open("info.txt",O_RDONLY);
    
    while((ret = read(fd,&stud,sizeof(stud))) != 0 )
    {
        printf("\n Name \t: %s",stud.name);
        printf("\n Roll \t: %d",stud.roll);
    }
}

int main()
{
    int fd = 0, i = 0, size = 0, ret = 0;
    
    fd = creat("info.txt",0777);
    
    if(fd == -1)
        printf("\n ERROR: Unable to open the file 1\n\n");
    else
        printf("\n File is successfully opened with fd : %d \n",fd);
    
    STUDENT stud;
    
    printf("How many students :");
    scanf("%d",&size);
    
    for(i=0;i<size;i++)
    {
        printf("\n Enter name of student %d :",i+1);
        gets((char*)&stud.name);fflush(stdin);
        gets((char*)&stud.name);fflush(stdin);
        
        printf(" Enter roll number of student %d :",i+1);
        scanf("%d",&stud.roll);
        
        ret = write(fd,&stud,sizeof(stud));
        if( ret == -1)
        {
            printf("\n Unable to write");
        }
        //memset(&stud,0,sizeof(stud));
    }
    
    close(fd);
    Display();
    
    return 0;
}
