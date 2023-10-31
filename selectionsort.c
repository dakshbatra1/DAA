#include<stdio.h>

void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;

}
void selectionsort(int a[],int n)
{
    int min;
for(int i=0;i<n-1;i++)
{
    min=i;
    for(int j=i+1;j<n;j++)
    
        if(a[j]<a[min])
        
            min=j;
        
    if(min!=i)
    swap(a[min],a[i]);
}
}
void print(int a[],int n)
{
    for(int i=0;i<=n;i++)
    {
        printf("%d  ",a[i]);
    }
    printf("\n");
}
int main()
{
  int a[]={10,55,65,5,15,25,35,20};
  int n=sizeof(a)/sizeof(a[0]);
  selectionsort(a,n);
  printf("Array after sorting=\n");
  print(a,n);
  return 0;


}
