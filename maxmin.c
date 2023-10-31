#include <stdio.h>
int main() {
    int list[] = {8, 3, 11, 2, 9, 5};
    int size = 6;
    int max = list[0];
    int min = list[0];
    for (int i = 1; i < size; i++) {
        if (list[i] > max) {
            max = list[i];
        }
        if (list[i] < min) {
            min = list[i];
        }
    }
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
    return 0;
}
