#include<stdio.h>
int main()
{
    int a[10]={1,2,4,8,5,6,8,8,9,9};
    int i,j,c=0;
    printf("enter the element to be searched in the array:");
    scanf("%d",&j);
    for(i=0;i<10;i++)
    {
        if(a[i]==j)
        {
            c++;
        }
    }
    printf(" The element %d is found %d times in the array",j,c);
    return 0;
}

