#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node* next;
}typedef Node ;

void print(Node* ptr){
  while(ptr!=NULL){
    printf("%d  ",ptr->data);
    ptr = ptr->next;
  }
  printf("\n");
}

Node* createNode(int data){
  Node* newNode = (Node*) malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = NULL;
  return newNode;
}

Node* createLinkedList(int size){
  if (size<=0){
    return NULL;
  }

  Node* head = createNode(1);
  Node* current = head;

  for (int i=1;i<size;i++) {
    current->next=createNode(i+1);
    current = current->next;
  }
  
  return head;
}

Node* insertAtBeginning(Node* ptr, int value){
  Node* temp=createNode(value);
  temp->next=ptr;
  return temp;
}

Node* insertAtEnd(Node* ptr, int value){
  Node* current=ptr;
  Node* temp=createNode(value);
  if (ptr==NULL) return temp;
  while (current->next!=NULL) {
    current=current->next;
  }
  current->next=temp;
  return ptr;
}

Node* insertAfterValue(Node* ptr, int target, int value){
  Node* current = ptr;
  Node* temp=createNode(value);
  while (current!=NULL && current->data!=target) {
    current=current-next;
  }
  if (current==NULL) printf("Value not found\n");
  else {
    temp->next=current-next;
    current-next=temp;
  }
  return ptr;
}

Node* insertBeforeValue(Node* ptr, int target, int value){
  Node* current = ptr;
  Node* temp=createNode(value);
  while (current!=NULL && current->next->data!=target) {
    current=current-next;
  }
  if (current==NULL) printf("Value not found\n");
  else {
    temp->next=current-next;
    current-next=temp;
  }
  return ptr;
}



int main(int argc, char *argv[]){ 
  Node* linkedList = createLinkedList(10);
  print(linkedList);
  return 0;
}
