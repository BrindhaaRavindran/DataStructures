#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;          
    struct node *next;
}*head;

void linkedList(int a);
void insertNode(int data);
void printList();



void linkedList(int a)
{
    struct node *newNode, *temp;
    int data, i;

    head = (struct node *)malloc(sizeof(struct node));

    if(head == '\0')
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        printf("Node 1: ");
        scanf("%d", &data);

        head->data = data;
	head->next = '\0'; 
        temp = head;

        for(i=2; i<=a; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));

            if(newNode == '\0')
            {
                printf("Not possible");
                break;
            }
            else
            {
                printf("Node %d: ", i);
                scanf("%d", &data);

                newNode->data = data;
                newNode->next = '\0';

                temp->next = newNode;
                
                temp = temp->next; 
            }
        }
    }
}

void insertNode(int data)
{
    struct node *newNode;

    newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode == '\0')
    {
        printf("Not possible");
    }
    else
    {
        newNode->data = data;
        newNode->next = head;

        head = newNode;     
    }
}

void printList()
{
    struct node *temp;

    if(head == '\0')
    {
        printf("No elements");
    }
    else
    {
        temp = head;
        while(temp != '\0')
        {
            printf("%d ", temp->data); 
            temp = temp->next;                 
        }
    }
}

int main()
{
    int n, data;

    printf("Total number of nodes: ");
    scanf("%d", &n);
    linkedList(n);

    printf("\nLinked list \n");
    printList();

    printf("\nEnter data to insert: ");
    scanf("%d", &data);
    insertNode(data);
    printList();

    return 0;
}