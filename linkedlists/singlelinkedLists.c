// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>


struct node{
    int data;
    struct node *link;
};


int main() {
    // Write C code here
    struct node *head = malloc(sizeof(struct node));
    head->data = 98;
    head->link = NULL;
    
    struct node *current = malloc(sizeof(struct node));
    current->data = 45;
    current->link = NULL;
    head->link = current;
    
    
    struct node *current2 =malloc(sizeof(struct node));
    current2->data = 27;
    current2->link = NULL;
    current-> link = current2;
    
    
    
    printf("%p", head);

    return 0;
};