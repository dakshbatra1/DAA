#include <stdio.h>
 
int main()
{
    int i, x, pos,n;
    int arr[] = {10, 20, 30, 40, 50};
  for(int i=0; i<5; i++) 
     printf("%d ", arr[i]);
    for (i = 0; i < 10; i++)
        arr[i] = i + 1;
    printf("\n");
    printf("enter the element to be inserted:\n");
    scanf("%d",&x);
    printf("enter the position at which element is to be inserted\n");
    scanf("%d",&pos);
    n++;
    for (i = n - 1; i >= pos; i--)
        arr[i] = arr[i - 1];
    arr[pos - 1] = x;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}