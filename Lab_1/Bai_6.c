#include<stdio.h>

void reversearray(int arr[], int size){
    int l = 0, r = size - 1, tmp;
    
    /*****************/
    for (int i = 0; i < size / 2; ++i)
    {
        tmp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = tmp;
    }
    /*****************/
}

void ptr_reversearray(int *arr, int size){
    int l = 0, r = size - 1, tmp;
    
    /*****************
    # YOUR CODE HERE #
    *****************/
    
}

int main()
{
    int a[6]= {13, -355, 235, 47, 67, 943};
    for (int i = 0; i < 6; ++i)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    reversearray(a, 6);

    for (int i = 0; i < 6; ++i)
    {
        printf("%d ", a[i]);
    }
    return 0;
}