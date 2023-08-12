#include <stdio.h>
#include <stdlib.h>

int BinarySearch(int arr[], int size, int element){
    int low, mid, high;
    low= 0;
    high= size-1;

    mid= (low + high)/2;

    while (low<=high){
        if (arr[mid] == element){
            return mid;
        }
        if (arr[mid]<element){
            low= mid+1;
        }
        else{
            high= mid-1;
        }
    return -1;
    }
}


int main()
{
    int arr[10]= {23,34,56,57,77,98};
    int size= sizeof(arr)/sizeof(int);
    int element= 77;
    int numberindex= BinarySearch(arr, size, element);
    printf("The %dth element found in %dth index", element, numberindex);
    return 0;
}