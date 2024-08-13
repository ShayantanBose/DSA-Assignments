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

//  Main function
int main(){
    struct Node* firstNode= creatnode(1);
    struct Node* secondNode= creatnode(2);
    struct Node* thirdNode= creatnode(3);

    firstNode->next=secondNode;
    secondNode->next=thirdNode;

    printf("Linked List:- ");
    printlist(firstNode);
}
