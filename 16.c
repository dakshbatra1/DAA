#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}node;
int main()
{
    node *head,*p;
    int n,x=0,i;
    printf("enter no of elements to be inserted:");
    scanf("%d",&n);
    head=(node*)malloc(sizeof(node));
    printf("enter elements:"); 
    scanf("%d",&(head->data));
    head->next=NULL;
    p=head;
    for(i=1;i<n;i++)
    {
        p->next=(node*)malloc(sizeof(node));
        p=p->next;
        p->next=NULL;
        scanf("%d",&(p->data));
    
    }
    p=head;
    while(p!=NULL)
    {
        printf("\n%d",p->data);
        p=p->next;
    } 
    p=head;
    while(p!=NULL)
    {
        x=x+1;
        p=p->next;
    }
    printf("\nnumber of nodes are:%d",x);
    return 0;
}