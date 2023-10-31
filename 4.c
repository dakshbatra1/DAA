//searching
#include<stdio.h>
int main()
{
    int a[12],size,i,search,count=0;
    printf("Enter the size of array:");
    scanf("%d",&size);
   printf("Enter the elements in the array: ");
   for(i=0;i<size;i++)
   {
    scanf("%d",&a[i]);
   }
printf("\nENTER THE ELEMENT YOU WANT TO SEARCH:");
scanf("%d",&search);
for(i=0;i<size;i++)
{
    if(search==a[i])
    {
        count=1;
        break;
        
    }
    
}
if(count==1){
    printf("The element found at %d",i);
}
else{
    printf("Element not found");
}
return 0;
}