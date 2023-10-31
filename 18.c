#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node *next;
}node;

void main(){
    node *p,*head,*q, *r;
    int n,i;
    printf("Enter The No. of element you want to Enter: ");
    scanf("%d",&n);
    head=(node*)malloc(sizeof(node));
    printf("Enter The Value in Linked List: ");
    scanf("%d",&head->data);
    head->next=NULL;
    p=head;
    for(i=1;i<n;i++){
        p->next=(node*)malloc(sizeof(node));
        p=p->next;
        printf("\nEnter The Value in Linked List: ");
        scanf("%d",&p->data);
        p->next=NULL;
    }
    printf("\nValue Inserted");
    printf("\nThe Value In Linked List are: \n");
    p=head;
    while(p!=NULL){
        printf("\n%d",p->data);
        p=p->next;
    }
    int pos,cursor=0;
    p=head;
    printf("\nEnter The Position you want to Delete: ");
    scanf("%d",&pos);
    while(p!=NULL){
        cursor++;
        if(pos==1){
            p=head;
            head=head->next;
            free(p);
            break;
        }
        else if(pos==n && cursor+1==n){
            q=p->next;
            p->next=NULL;
            free(q);
            break;
        }
        else if(cursor+1==pos){
           q=p->next;
           p->next=q->next;
           free(q);
            break;
        }
        p=p->next;
    }
    printf("\nDeletion Complete\n");
    printf("\nThe New Linked List is :\n");
    p=head;
    while(p!=NULL){
        printf("\n%d",p->data);
        p=p->next;
    }
}