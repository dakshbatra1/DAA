typedef struct node{
    int value; 
    struct node *next;
}node;

node *createNode(int val){
    node *newNode=malloc(sizeof(node));
    newNode->value=val;
    newNode->next=0;
    return newNode;
}