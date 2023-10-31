#include<stdio.h>
int main()
{
    int a[12];
    int i,j;
    for(i=0;i<10;i++)
    {
        printf("Enter element for index %d\t",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("The element at index %d is: %d",i,a[i]);
       printf("\n"); 
    }
    for(i=9;i>=4;i--)
    {
     a[i+1]=a[i];
    }
    printf("Enter the element to be inserted");
    scanf("%d",&j);
    a[4]=j;
    printf("array after insertion is:\n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
    for(i=4;i<10;i++)
    {
        a[i]=a[i+1];
    }
    printf("array after deletion is:\n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
return 0;
}