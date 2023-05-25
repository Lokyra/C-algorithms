#include <stdio.h>

#include "array.h"

int LinearSearch(struct Array *arr, int key) {

    for (int i; i < arr->length;i++) {
        if (key == arr->A[i]) {
            swap(&arr->A[i], &arr->A[0]); 
            return i;
        }
    }
    return -1;
}

int main()
{
    return 0;
}
