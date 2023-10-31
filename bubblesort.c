#include <stdio.h>  
  
void bubble_sort(int a[], int n) {  
  int i, j;  
  for (i = 0; i < n - 1; i++) {  
    for (j = 0; j < n - i - 1; j++) {  
      if (a[j] > a[j + 1]) {  
        int temp = a[j];  
        a[j] = a[j + 1];  
        a[j + 1] = temp;  
      }  
    }  
  }  
}  
int main() {  
  printf("program to execute bubble sort in data structures:");
  int a[] = {64, 34, 25, 12, 22, 11, 90};  
  int n = sizeof(a) / sizeof(a[0]);  
  bubble_sort(a, n);  
  printf("Sorted array: ");  
  for (int i = 0; i < n; i++) {  
    printf("%d ", a[i]);  
  }  
  return 0;  
}