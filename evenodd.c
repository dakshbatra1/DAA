#include <stdio.h>

int isEven(int num) {
    return num % 2 == 0;
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (isEven(num))
        printf("Even\n");
    else
        printf("Odd\n");
    return 0;
}
