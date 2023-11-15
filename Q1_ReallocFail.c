#include <stdio.h>
#include <stdlib.h>

int main() {
    // Fix ptr so that it can be correctly reallocated memory.
    int arr[] = {2, 6, 14};
    int i;
    int* ptr = arr;
    int* ptr_new;

    // DO NOT CHANGE ANYTHING BELOW THIS LINE
    ptr_new = (int*)realloc(ptr, sizeof(int) * 4);
    *(ptr_new + 3) = 30;

    for (i = 0; i < 4; i++)
        printf("%d ", *(ptr_new + i));
    printf("\n");

    free(ptr_new);
    return 0;
}