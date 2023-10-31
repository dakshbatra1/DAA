#include<stdio.h>
int main()
{
    int i,key,j,n,arr[100];
   printf("enter no of elements in the array");
   scanf("%d",&n);
   printf("enter %d elements:\n",n);
    for (i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    printf("array in ascending order is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}