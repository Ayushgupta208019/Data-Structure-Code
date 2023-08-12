#include <stdio.h>
#include <stdlib.h>

int IndDeletion(int arr[], int size, int index)
{
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int traversal(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[7] = {1, 3, 5, 7, 4, 3, 8};
    int index = 3;
    int size = 7;
    IndDeletion(arr, size, index);
    size -= 1;
    traversal(arr, size);
    return 0;
}
