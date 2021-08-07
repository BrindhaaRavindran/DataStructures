#include <stdio.h>
#include <stdlib.h>

struct Node 
{
	int data;
	struct Node* next;
};

void printList(struct Node* a)
{
    while (a != '\0') 
    {
        printf(" %d ", a->data);
        a = a->next;
    }
}

int main()
{
	struct Node* head = '\0';
	struct Node* middle = '\0';
	struct Node* end = '\0';
	
	head = (struct Node*)malloc(sizeof(struct Node));
	middle = (struct Node*)malloc(sizeof(struct Node));
	end = (struct Node*)malloc(sizeof(struct Node));

	head->data = 100; 
	head->next = middle; 
	middle->data = 200;
	middle->next = end;
	end->data = 300; 
	end->next = '\0';
	printList(head);
	return 0;
}
