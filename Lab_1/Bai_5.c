#include<stdio.h>
double* maximum(double* a, int size){
    double *max;
    max = a;
    if (a==NULL) return NULL;

    /*****************/
    for (int i = 1; i < size; ++i)
    {
        if (a[i] > *max)
            max = (a + i);
    }
    /*****************/
    
    return max;
}