#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void insert()
{
    int item;
    if (rear == MAX - 1)
    {
        printf("Queue is full\n");
    }
    else
    {
        printf("Enter the item to insert: ");
        scanf("%d", &item);
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        queue[rear] = item;
        printf("Inserted %d\n", item);
    }
}

void delete()
{
    if (front == -1 || front > rear) {

        printf("Queue is empty\n");
    }
    else
    {
        printf("Deleted %d\n", queue[front]);
        front++;
    }
}

void display()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main()
{
    int choice;
    do
    {
        printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    }
    while (choice != 4);
    return 0;
}
