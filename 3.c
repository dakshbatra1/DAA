//buble sort
#include <stdio.h>
int main (){
   int a[10];
   int i, j, x;
   printf("Enter the elements");
   for(i = 0; i < 10; ++i)
      scanf("%d", &a[i]);
   for (i = 0; i < 10; ++i){
      for (j = i + 1; j < 10; ++j){
         if (a[i] > a[j]){
            x=a[i];
            a[i] = a[j];
            a[j] = x;
         }
      }
   }
   printf("The numbers in ascending order is\n:");
   for(i = 0; i < 10; ++i){
      printf("%d\n", a[i]);
   }
   return 0;
}