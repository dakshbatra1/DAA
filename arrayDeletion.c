#include <stdio.h>
int main() {
    int list[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    int element_to_delete = 5;
    int i;
    for (i = 0; i < size && list[i] != element_to_delete; i++);
    if (i < size) {
        for (; i < size - 1; i++) {
            list[i] = list[i + 1];
        }
        size--;
    }
    printf("Updated List: ");
    for (int j = 0; j < size; j++) {
        printf("%d ", list[j]);
    }
    printf("\n");
    return 0;
}
