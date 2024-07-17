#include <stdio.h>
#define SIZE 100

int stack[SIZE],top=-1;
void push(int value) {
    if (top ==SIZE - 1) {
        printf("Stack overflow %d\n", value);
    }
    stack[++top] = value;
    printf("Pushed %d into the stack\n", value);
}


int pop() {
    if (top==-1) {
        printf("Stack underflow\n");
    }
    printf("Popped %d from the stack\n", stack[top]);
    return stack[top--];
}
int peek() {
    if (top==-1) {
        printf("Stack is empty\n");

    }
    return stack[top];
}
void display() {
    if (top==-1) {
        printf("Stack is empty\n");
    }
    printf("Elements in the stack: ");
    for (int i = top; i >= 0; --i) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    int choice, value;
    while (1)
        {
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                printf("Top element: %d\n", peek());
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exit\n");
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
