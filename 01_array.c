#include <stdio.h>
#include <stdlib.h>

struct MyArray
{
    int total_size;
    int used_size;
    int *ptr;
};

void createarray(struct MyArray * a, int tSize, int uSize)
{
    a->total_size= tSize;
    a->used_size= uSize;
    a->ptr= (int *)malloc(tSize*sizeof(int));
};

void SetValueArray(struct MyArray *a){
    int n;
    for (int i=0; i<a->used_size; i++){
        printf("Enter Value %d: ", i+1);
        scanf("%d", &n);
        (a->ptr)[i]= n;
    }
}

void ShowArray(struct MyArray *a)
{
    for (int i=0; i<a->used_size; i++){
        printf("%d\n", (a->ptr)[i]);
    }
};

int main()
{
    struct MyArray marks;
    createarray(&marks, 10, 2);
    printf("SetValue is in Progress\n ");
    SetValueArray(&marks);
    printf("Show Value is in progress\n ");
    ShowArray(&marks);
    
    return 0;
}

