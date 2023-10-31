#include<stdio.h>
int main(){
    int arr[100], x, arr1[100];
    printf("Enter how many number you want to enter::");
    scanf("%d", &x);
    for(int i=0; i<x; i++){
        printf("Enter process id::");
        scanf("%d", &arr[i]);
    }
    for(int j=0; j<x; j++){
        printf("Enter burst time of process id(%d)::", arr[j]);
        scanf("%d", &arr1[j]);
    }
    printf("Data entered by the user:\n");
    printf("Process id\tBurst Time\n");
    for(int i=0; i<x; i++){
        printf("%d\t\t%d\n", arr[i], arr1[i]);
    }
    for(int i=0; i<x; i++){
        for(int j=0; j<x; j++){
            if (arr1[j]<arr1[j+1]){
                continue;
            }
            else {
                int temp, temp1;
                temp=arr1[j];
                temp1=arr[j];
                arr1[j]=arr1[j+1];
                arr[j]=arr[j+1];
                arr1[j+1]=temp;
                arr[j+1]=temp1;
            }
        }
    }
    printf("Process id\tBurst Time\n");
    for(int i=0; i<x; i++){
        printf("%d\t\t%d\n", arr[i], arr1[i]);
        }
}    