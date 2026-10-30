#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

void push(int value) {
    if (top == SIZE - 1) {
        printf("Stack Overflow\n");
        return;
    }

    top++;
    stack[top] = value;
    printf("Pushed: %d\n", value);
}

int pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }

    int value = stack[top];
    top--;
    return value;
}

void display() {
    if (top == -1) {
        printf("Stack is Empty\n");
        return;
    }

    printf("Stack: ");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    push(10);
    push(20);
    push(30);
    display();

    printf("Popped: %d\n", pop());

    push(40);
    push(50);
    push(60);
    push(70);
    display();

    printf("Popped: %d\n", pop());
    printf("Popped: %d\n", pop());
    printf("Popped: %d\n", pop());
    printf("Popped: %d\n", pop());
    printf("Popped: %d\n", pop());

    display();
    printf("Popped: %d\n", pop());

    return 0;
}