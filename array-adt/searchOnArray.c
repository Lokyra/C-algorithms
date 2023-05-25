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

int BinarySearch(struct Array *arr, int key) {
    int l = 0;
    int h = arr->length - 1;
    int mid = 0;

    while (l <= h) {
        mid = (l + h) / 2;

        if (arr->A[mid] == key)
            return mid;

        else if (arr ->A[mid] < key) {
            h = mid - 1;
        } else {
            l = mid + 1;
    
        }
    }

    return -1;
}

int BinarySearchRec(int arr[], int l, int h, int key)
{
    int mid = 0;

    if (l <= h) {
        mid = (l + h) / 2;

        if (key == arr[mid])
            return mid;

        else if (key < arr[mid]) {
            return BinarySearchRec(arr, l, mid-1, key);
        } else {
            return BinarySearchRec(arr, l, mid+1, key);
        }
    }

    return -1;

}

int main()
{
    return 0;
}
