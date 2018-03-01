#include<stdio.h>
#include<string.h>
#include<unistd.h>
//#include<io.h>
#include<stdlib.h>
#include<fcntl.h>

//#pragma pack(1)
typedef struct student
{
    char name[20];
    char div;
    int id;
    int marks;
}STUD;

void AcceptInfo(int no)
{
    int i = 0, ret=0;
    STUD obj;
    
    int fd = 0;
    fd = creat("demo.txt",0777);
    if(fd == -1)
    {
        printf("\n Unable to create file.");
        return ;
    }
    
    printf("\n File is successfully open with fd : %d\n",fd);
    
    for(i = 0; i < no; i++)
    {
        printf("\n Enter id \t: ");
        scanf(" %d",&obj.id);
        fflush(stdin);
        
        printf(" Enter name \t: ");
        fflush(stdin);
        fgets((char *)&obj.name,20,stdin);
        //gets((char *)&obj.name);
        //fflush(stdin);
        fgets((char *)&obj.name,20,stdin);
        //gets((char *)&obj.name);
        //fflush(stdin);
        //while((getchar()) != '\n')
    
        printf("Enter division \t: ");
        scanf(" %c",&obj.div);
        //fflush(stdin);
        
        printf(" Enter marks \t: ");
        scanf(" %d",&obj.marks);
        //fflush(stdin);
  
        ret=  write(fd,&obj,sizeof(obj));
        if( ret == -1)
        {
            printf("\n Unable to write");
        }
    }
    close(fd);
}


void DisplayInfo()
{
    int fd=0,ret=0;
    STUD obj;
    fd = open("demo.txt",O_RDONLY);
    if( fd == -1)
    {
        printf("\n Unable to  open file");
    }
    
    while((ret = read(fd,&obj,sizeof(obj))) !=0 )
    {
        printf("\n Name \t: %s",obj.name);
        printf(" div \t: %c",obj.div);
        printf("\n id \t: %d",obj.id);
        printf("\n marks \t: %d\n",obj.marks);
    }
}
int main()
{
    STUD obj;
    AcceptInfo(2);
    DisplayInfo();
    //printf("\n%lu\n",sizeof(obj));

    return 0;
    
}


