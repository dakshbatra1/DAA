#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node*prev;
    int data;
    struct node*next;

};
// creating nodes
int main()
{
 struct node*head=malloc(sizeof(struct node));
 struct node*second=malloc(sizeof(struct node));
 struct node*third=malloc(sizeof(struct node));
 struct node*fourth=malloc(sizeof(struct node));


//assigning values
head->data=45;
second->data=19;
third->data=28;
fourth->data=99;

//linking the nodes
head->prev=NULL;
head->next=second;
second->prev=head;
second->next=third;
third->prev=second;
third->next=fourth;
fourth->prev=third;
fourth->next=NULL;

//printing the nodes
struct node*ptr=head;
while(ptr!=NULL)
{
    printf("%d\n",ptr->data);
    ptr=ptr->next;
}
struct node*temp=head;
head=head->next;
free(temp);
temp=NULL;
printf("The element after deleting is\n");
ptr=head;
while(ptr!=NULL)
{
    printf("%d\n",ptr->data);
    ptr=ptr->next;
}
}