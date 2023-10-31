#include <stdio.h>
int main()
{
    int n, x, d, a[100], b[100];
    printf("Enter the number of elements in array\n");
    scanf("%d", &n);
    printf("Enter the array elements\n");
    for (x=0;x<n ;x++)
        scanf("%d", &a[x]);
    for (x=n-1,d=0;x>=0;x--,d++)
        b[d] = a[x];
    for (x=0;x< n;x++)
        a[x] = b[x];
    printf("Reverse array is\n");
    for (x=0; x<n;x++)
        printf("%d\n", a[x]);
    return 0;
}