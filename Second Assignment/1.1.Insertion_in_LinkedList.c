#include <stdio.h>
#include <stdlib.h>


// Initialization of a new node
struct Node
{
    /* data */
    int data;
    struct Node* next;
};

// To creeat a new Node
struct Node* creatnode(int data){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
};

// To print a linked List
void printlist(struct Node* head){
    struct Node* current= head;
    while(current!=NULL){
        printf("%d, ",current->data);
        current=current->next;
    }
};

// to insert in the middle of a LinkedList
void InsertNewNode(struct Node* prevNode, int newData){
    if(prevNode==NULL){
        printf("The node is empty hence cannot insert");
    }
    struct Node* newNode=creatnode(newData);
    newNode->next=prevNode->next;
    prevNode->next=newNode;
};

//  Main function
int main(){
    struct Node* firstNode= creatnode(1);
    struct Node* secondNode= creatnode(2);
    struct Node* thirdNode= creatnode(3);

    firstNode->next=secondNode;
    secondNode->next=thirdNode;

    InsertNewNode(secondNode,4);

    printf("Linked List:- ");
    printlist(firstNode);
}
