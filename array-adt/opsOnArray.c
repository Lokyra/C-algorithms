#include <stdio.h>
#include <stdlib.h>
#include "array.h"



int insert(struct Array *arr, int index, int x) {
    if (index >= 0 &&  index <= arr->length)
        return -1;

    for (int i = arr->length; i > index; i--) {
        arr->A[i] = arr->A[i-1];
    }
    arr->A[index] = x;
    arr->length++;

    return 0;
}

int delete(struct Array *arr, int index)
{
    if (index >= 0 &&  index <= arr->length)
        return -1;

    int x = arr->A[index];

    for (int i = index; i < arr->length-1; i++) {
        arr->A[i] = arr->A[i+1];
    }
    arr->length--;

    return x;
}

void append(struct Array *arr, int x) {
    if (arr->length<arr->size)
        arr->A[arr->length++]=x;
}

int main()
{
    struct Array arr1 = {{2, 3, 4, 5, 6}, 10, 5};
    Display(arr1);
    return 0;
}
