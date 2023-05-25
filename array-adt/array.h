#ifndef __ARRAY_H__
    #define __ARRAY_H__

    #include <stdio.h>

struct Array
{
    int A[10];
    int size;
    int length;
};

void swap(int *a, int *b) {
    int temp = 0;

    temp = *a;
    *a = *b;
    *b = temp;
}

void Display(struct Array arr)
{
    int i;
    printf("\nElements are\n");
    for (i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);

}

#endif
