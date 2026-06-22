#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *link;
};

struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->link = NULL;
    return newNode;
}

void insertAtFirst()
{
    struct Node *newNode;
    int item;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    if(newNode == NULL)
    {
        printf("Overflow");
    } 
    else
    {
        printf("Enter data");
        scanf("%d ", &item);
        newNode->data = item;
        newNode->link = createNode();
    }

}

int main()
{

}
