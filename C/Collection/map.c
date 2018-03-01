#include"Header.h"

long ComputeHash(char name[])
{
    long code = 0;
    int i=0;
    for(i=0;i<(strlen(name));i++)
    {
        code = code + ((name[i])*1987);
    }
    return code;
}

int put(char * name,int mark)
{
    int i=0;
    long Hash = ComputeHash(name);
    int index = Hash % (N-1);
    PNODE newn,temp;
    
    newn = (PNODE)malloc(sizeof(NODE));
    newn -> key = name;
    newn -> value = mark;
    newn -> next = NULL;
    
    if(arr[index] == 0)
    {
        arr[index] = &newn;
    }
    else
    {
        temp = newn;
        while(temp->next != NULL)
        {
            if(strcmp((temp->key),(newn->key)))
            {
                temp->next = newn;
                break;
            }
            else
                temp = temp->next;
        }
        temp->next = newn;
    }
        
    return index;
}
/*
void Display(int index)
{
    struct node ** temp;
    temp=arr[index];
    printf("\nName : %s\n, Marks : %d",temp->key,temp->value);
}
*/
int main()
{
    PNODE head = NULL;
    int i = 0;
    i = put("pratik",03); 
    printf("\n Record inserted at %d\n",i);
//    PPNODE temp = arr[i];
 //   printf("\nName : %s \n",temp->key);
    
    i = put("pratik",12); 
    printf("\n Record inserted at %d\n",i);
    //Display(i);
    
    return 0;
}
