#include <stdio.h>
int main() {
    int list[10] = {1, 2, 3, 4, 5};
    int size = 5;
    int element = 6;
    list[size] = element;
    size++;
    printf("Updated List: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");
    return 0;
}