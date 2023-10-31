#include <stdio.h>
int main() {
    int list[] = {1, 2, 3, 4, 5};
    int size = 5;
    int temp;
    for (int i = 0; i < size / 2; i++) {
        temp = list[i];
        list[i] = list[size - i - 1];
        list[size - i - 1] = temp;
    }
    printf("Reversed List: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");
    return 0;
}
