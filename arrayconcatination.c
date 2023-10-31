#include <stdio.h>
int main() {
    int list1[] = {1, 2, 3};
    int list2[] = {4, 5, 6};
    int size1 = 3, size2 = 3;
    int size3 = size1 + size2;
    int list3[size3];
    for (int i = 0; i < size1; i++) {
        list3[i] = list1[i];
    }
    for (int i = 0; i < size2; i++) {
        list3[size1 + i] = list2[i];
    }
    printf("Concatenated List: ");
    for (int i = 0; i < size3; i++) {
        printf("%d ", list3[i]);
    }
    printf("\n");
    return 0;
}
