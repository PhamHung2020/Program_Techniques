#include<stdio.h>

int counteven(int* arr, int size){
    int count = 0;
    
    /*****************/
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] % 2 == 0)
            ++count;
    }
    /*****************/
    
    return count;    
}

int main()
{
    int a[7]= {13, -355, 235, 47, 67, 943, 1222};
    printf("%d", counteven(a, 7));
    return 0;
}