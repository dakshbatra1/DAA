#include <stdio.h>
int main() {
    int list[] = {10, 20, 30, 40, 50};
    int size = 5;
    int search_element = 30;
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (list[i] == search_element) {
            found = 1;
            break;
        }
    }
    if (found)
        printf("Element %d found in the list.\n", search_element);
    else
        printf("Element %d not found in the list.\n", search_element);
    return 0;
}
