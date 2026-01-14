#include<stdio.h>
#include<string.h>
typedef struct product {
	int ID ;
	char name[20] ;
	int price ;
} product ;
typedef struct node {
	product prod ;
	struct node *next ;
} node ;
int main(){
}
#include <stdlib.h>
#include <string.h>

/* ---------- Structures ---------- */

typedef struct Product {
    int ID;
    char Name[20];
    int Price;
} Product;

typedef struct Node {
    Product Prod;
    struct Node *next;
} Node;

/* ---------- Q1: Create empty list & check ---------- */

Node* createEmptyList() {
    return NULL;
}

int isEmpty(Node *head) {
    return head == NULL;
}

/* ---------- Q2: Insert at beginning ---------- */

Node* insertAtBeginning(Node *head, Product p) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->Prod = p;

    if (head == NULL) {
        newNode->next = newNode;
        return newNode;
    }

    Node *temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->next = head;
    head = newNode;

    return head;
}

/* ---------- Q2: Insert at end ---------- */

Node* insertAtEnd(Node *head, Product p) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->Prod = p;

    if (head == NULL) {
        newNode->next = newNode;
        return newNode;
    }

    Node *temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->next = head;

    return head;
}

/* ---------- Q3: Display list ---------- */

void displayList(Node *head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    Node *temp = head;
    do {
        printf("ID: %d | Name: %s | Price: %d\n",
               temp->Prod.ID,
               temp->Prod.Name,
               temp->Prod.Price);
        temp = temp->next;
    } while (temp != head);
}

/* ---------- Main (Test) ---------- */

int main() {
    Node *head = createEmptyList();

    Product p1 = {3, "Mouse", 1500};
    Product p2 = {2, "Keyboard", 3000};
    Product p3 = {4, "Screen", 25000};
    Product p4 = {1, "Screen", 25000};



    head = insertAtBeginning(head, p1);
    head = insertAtBeginning(head, p2);
    head = insertAtEnd(head, p3);
    head = insertAtBeginning(head, p4);

    displayList(head);

    return 0;
}
