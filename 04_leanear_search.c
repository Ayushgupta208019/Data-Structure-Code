#include <stdio.h>
#include <stdlib.h>

int leanearSearch(int arr[], int n, int element){
    for (int i=0; i<n; i++){
        if (arr[i]== element){
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[]= {23,56,98,654,99,67,34,223,84,76};
    int size= sizeof(arr)/sizeof(int);
    int element= 22;
    int searchindex= leanearSearch(arr, size, element);
    printf("The Element %d is find in %dth index", element, searchindex);
    return 0;
}