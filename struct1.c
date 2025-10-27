#include<stdio.h>
#include<stdlib.h>


struct Node{
    int data;
    struct Node *next;
};


int main(){

struct Node *head = malloc(sizeof(struct Node));
head->data = 10;
head->next = malloc(sizeof(struct Node));
head->next->data = 20;
head->next->next = NULL;
printf("%d %p\n",head->data,head->next);
return 0;



}