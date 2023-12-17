/* #include <stdio.h>
#define size 5;

int top = -1, s[10];
void push();
void pop();
void display();
int peek();
int count();

int main(int argc, char const *argv[])
{
    int choice;
    while (choice!=1)
    {
        printf("\nPerform operations on the stack : ");
        printf("\n1.Push\n2.Pop\n3.Display\n4.Peek\n5.Count\n6.End");
        printf("\n\nEnter the choice : ");
        switch (choice)
        {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            peek();
            break;
        }
        case 5:
        {
            printf("Stack count is : %d\n", count());
            break;
        }
        case 6:
        {
            exit(0);
        }
        default:
        {
            printf("\nInvalid Choice!!");
        }
        }
    }
    return 0;
}

void push()
{
    int x;
    if (top == s - 1)
    {
        printf("\nOverflow!!");
    }
    else
    {
        printf("\nEnter the element to be added onto the stack : ");
        scanf("%d", &x);
        top++;
        s[top] = x;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nPopped element : %d", s[top]);
        top--;
    }
}

void display()
{
    if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nElements present in the stack : \n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", s[i]);
        }
    }
}

int peek()
{
    if (top == -1)
    {
        printf("Stack is Empty\n");
        return -1;
    }
    else
    {
        printf("Top element : %d\n", s[top]);
        return s[top];
    }
}

int count()
{
    return top + 1;
} */



#include <stdio.h>
int stack[10], choice, n, top, x, i; // Declaration of variables
void push();
void pop();
void display();
int main()
{
    top = -1; // Initially there is no element in stack
    printf("\n Enter the size of STACK : ");
    scanf("%d", &n);
    printf("\nSTACK IMPLEMENTATION USING ARRAYS\n");
    do
    {
        printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
        printf("\nEnter the choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            break;
        }
        default:
        {
            printf("\nInvalid Choice\n");
        }
        }
    } while (choice != 4);
    return 0;
}
void push()
{
    if (top >= n - 1)
    {
        printf("\nSTACK OVERFLOW\n");
    }
    else
    {
        printf("Enter a value to be pushed : ");
        scanf("%d", &x);
        top++;          // TOP is incremented after an element is pushed
        stack[top] = x; // The pushed element is made as TOP
    }
}
void pop()
{
    if (top <= -1)
    {
        printf("\nSTACK UNDERFLOW\n");
    }
    else
    {
        printf("\nThe popped element is %d", stack[top]);
        top--; // Decrement TOP after a pop
    }
}
void display()
{
    if (top >= 0)
    {
        // Print the stack
        printf("\nELEMENTS IN THE STACK\n\n");
        for (i = top; i >= 0; i--)
            printf("%d\t", stack[i]);
    }
    else
    {
        printf("\nEMPTY STACK\n");
    }
}