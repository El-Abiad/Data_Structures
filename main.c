#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main()
{
    Stack s;
    createStack(&s);
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0){
        push(&s, n%2);
        n /= 2;
    }

    while(!isEmpty(&s)){
        printf("%d", pop(&s));
    }

    return 0;
}
