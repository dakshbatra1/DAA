// C code to linearly search x in arr[].

#include <stdio.h>

int search(int arr[], int n, int x)
{
	for (int i = 0; i < n; i++)
		if (arr[i] == x)
			return i;
	return -1;
}

// Driver code
int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int x = 10;
	int n = sizeof(arr) / sizeof(arr[0]);

	printf("calling the function");
	int result = search(arr, n, x);
	if(result == -1)
		{printf("Element is not present in array");
        }
        else{
        printf("Element is present at index %d", result);
        }
	return 0;   
}
