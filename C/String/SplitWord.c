#include<stdio.h>
#include<stdlib.h>
int WordCount(char * );
int Split(char *);
int Allocate(int);
int i=0;
int main()
{
    char *arr;
    int iRet=0;
    //char arr[20]="aaa bbbb cccc";
    int iValue=0; 

    printf("enter the space allocation");
    scanf("%d",&iValue);
    arr=(char *)malloc(iValue*sizeof(char));
    printf("enter the elements::");
    for(i=0;i<iValue;i++)
    {
        scanf("%c",&arr[i]);    
    }
    printf("the entered elements are:::");
    for(i=0;i<iValue;i++)
    {
        printf("%c",arr[i]);    
    }
    iRet=Split(arr);
    return 0;
}//end of main
int Split(char * arr)
{    
    char **ptr;
    char * brr=arr;
    int *crr;        //array for storing number of character of the words 
    int value=0;
    int wcnt=0,i=0;
    int icnt=-1,jcnt=-1,cnt=-1;
    int a=0,k=0;
    while(*arr!='\0')
    {    
        if(*arr==' ')
        {
            while((*arr==' ')&&(*arr!='\0'))
            {
                arr++;
            }
        
        }
        else
        {    
            wcnt++;
            while((*arr!=' ')&&(*arr!='\0'))
            {
                icnt++;
                arr++;
            }
            printf("\n----->%d",icnt);
            icnt=0;
        }
        
    }

////////////////--->>>LOgic for allocating<<<----///////////////////////
    printf("\nword count:%d",wcnt);
    crr=(int*)malloc(wcnt*sizeof(int));//array for no of word count in horizontal way
    while(*brr!='\0')
    {    printf("%c",*brr);
        if(*brr==' ')
        {
            while((*brr==' ')&&(*brr!='\0'))
            {
                brr++;
            }
        }
        else
        {   
            cnt++;
            while((*brr!=' ')&&(*brr!='\0'))
            {
                jcnt++;
                brr++;
            }
        printf("\ncounter value----->%d",cnt);
           crr[cnt]=jcnt;
            printf("\n----->%d",jcnt);
            jcnt=0;
           printf("\nvalue in the array----->%d",crr[cnt]);
        }   
    }
    ptr=(char**)malloc(wcnt*sizeof(char*));
    for(a=0,k=0;a<wcnt;a++,k++)
    {    value=crr[k];
        ptr[a]=(char*)malloc(value*sizeof(char));
        ptr[a]=

    }
        printf("allocated baby!!!!");
    return 0 ;
}//end of split
