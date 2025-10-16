#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void createStack(Stack *s){
    s->top = -1;
}

int isEmpty(Stack *s){
    return ((s->top == -1)?1:0);
}

int isFull(Stack *s){
    return ((s->top == MAX_SIZE-1)?1:0);
}

TYPE pop(Stack *s){
    if(isEmpty(s)){
        printf("Stack underflow!\n");
        exit(1);
    }
    return s->arr[s->top--];
}

void push(Stack *s, TYPE x){
    if(isFull(s)){
        printf("Stack overflow!\n");
        exit(1);
    }
    s->arr[++s->top] = x;
}
