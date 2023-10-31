#include<stdio.h>
#include<stdlib.h>
struct node{                        
    int data;
    struct node *next;
}node;

void main(){
    struct node *head, *p;
    int i;
    head=(struct node*)malloc(sizeof(node));
    scanf("%d", &(head->data));
    head->next=NULL;
    p=head;
    for(i=0; i<=10; i++){
        (p->next)=(struct node*)malloc(sizeof(node));
        p=p->next;
        (p->next)=NULL;
        scanf("%d", &(p->data));
    }
    for(i=0; i<=10; i++){
        printf("%d", p->data);
    }
}