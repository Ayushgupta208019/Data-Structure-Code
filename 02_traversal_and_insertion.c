#include <stdio.h>
#include <stdlib.h>

int traversal(int arr[], int n){
    //code for traversal into a array.
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int insertion(int arr[], int size, int element, int index, int capecity){
    //code for insert element into a array.
    if (size>=capecity){
        printf("Array is full so your element can not be inserted!");
    }
    for (int i= size-1; i>=index; i--){
        arr[i+1]= arr[i];
    }
    arr[index]= element;
    return 1;
}

int main()
{
    int arr[10]= {10,20,30,40};
    int size=4, element=50, index=2;
    traversal(arr, 4);
    insertion(arr,size,element,index,10);
    size+=1;
    printf("Insertion in progress.......\n");
    traversal(arr, size);
    printf("Insetions is completed, Thanks for using!");
    return 0;
}