//
//  SearchStruct.c
//  
//
//  Created by Pratik Bali on 11/01/18.
//

#include "Header.h"
#include "FileHelper.h"

void SearchStudent(char *FileName,char *StudName)
{
    STUDENT stud;
    char arr[50];
    int ret = 0, fd = 0, rno = 0, flag = 0;
    
    fd = OpenFileRD(FileName);
   
    while((ret = read(fd,&stud,sizeof(stud))) != 0)
    {
        if((strcmp(stud.name,StudName))==0)
        {
            strcpy(arr,stud.name);
            rno = stud.roll;
            flag = 1;
            break;
        }
    }
    
    if(flag == 1)
         printf("\n roll : %d\t Name : %s",rno,arr);
    else
        printf("\n Student not found");

    printf("\n ");
    close(fd);
}

int main(int argc, char * argv[])
{
    if(argc !=3)
    {
        printf("\n Enter valid arguement \n usage : <exename> <filename> <studentname>\n");
        return 0;
    }
    SearchStudent(argv[1],argv[2]);
    
    return 0;
}

