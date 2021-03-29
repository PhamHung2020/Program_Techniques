#include<stdio.h>

int main()
{
    int n = 0;
    printf("Enter the number of elements : ");
    scanf("%d", &n);

    int* arr = new int[n];
    for (int i = 0; i < n; ++i)
    {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            for (int k = i; k <= j; ++k)
            {
                printf("%4d", arr[k]);
            }
            printf("\n");
        }
    }
    delete[] arr;
    return 0;
}