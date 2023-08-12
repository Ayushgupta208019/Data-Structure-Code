#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void LinkListTraversal(struct Node *ptr){
    while(ptr != NULL){
        printf("Element is %d\n", ptr -> data);
        ptr= ptr->next;
    }
}

struct Node * InsertFirst(struct Node * head, int data){
    struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr -> next= head;
    ptr -> data= data;
};

struct Node * InsertIndex(struct Node * head, int data, int index){
    struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node * p = head;
    int i =0;
    while (i!=index-1){
        p = p->next;
        i++;
        
    }
    ptr-> next= p->next;
    p->next= ptr;
    ptr-> data= p->data;
    return head;
}


int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head= (struct Node *)malloc(sizeof(struct Node));
    second= (struct Node *)malloc(sizeof(struct Node));
    third= (struct Node *)malloc(sizeof(struct Node));
    fourth= (struct Node *)malloc(sizeof(struct Node));

    head -> data= 67;
    head -> next= second;

    second -> data= 45;
    second -> next= third;

    third -> data= 88;
    third -> next= fourth;

    fourth -> data= 90;
    fourth -> next= NULL;

    printf("Linked List Before Insert New Node\n");
    LinkListTraversal(head);
    head= InsertIndex(head, 31, 2);
    printf("New Linked List After Insert New Node\n");
    LinkListTraversal(head);
    return 0;
}