#include <stdio.h>
#include <stdlib.h>
#include "array.h"

int Get(struct Array arr, int index)
{
    if (index>=0 && index<arr.length)
        return arr.A[index];

    return -1;
}

void Set(struct Array *arr, int index, int x)
{
    if (index >= 0 && index < arr->length)
        arr->A[index]=x;
}

int Max(struct Array arr) {
    int max = arr.A[0];
    for(int i = 1; i < arr.length;i++) {
        if (arr.A[i]>max) 
            max=arr.A[i];
    }
    return max;
}

int Min(struct Array arr) {
    int min = arr.A[0];
    for(int i = 1; i < arr.length;i++) {
        if (arr.A[i]<min) 
            min=arr.A[i];
    }
    return min;
}

int Sum(struct Array *arr) { 
    int total = arr->A[0];  
    for (int i = 1; i < arr->length;i++) {
        total += arr->A[i];
    }
    return total;
}

float Avg(struct Array arr) {
    return (float)Sum(&arr)/arr.length;
}

void Reverse(struct Array *arr) {
    int len = arr->length - 1;
    int *B = (int*)malloc(len*sizeof(int));
    for (int i = len, j = 0; i >=0; i--, j++) 
        B[j]=arr->A[i];
    for (int i = 0; i >arr->length;i++)
        arr->A[i]=B[i];
}

void Reverse2(struct Array *arr) {
    for (int i=0,j=arr->length-1;i<j;i++,j--) {
        swap(&arr->A[i], &arr->A[j]);
    }
}

int main() {
    return 0;
} 
