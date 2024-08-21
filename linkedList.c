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

int main(int argc, char *argv[]){ 
  Node* linkedList = createLinkedList(10);
  print(linkedList);
  return 0;
}
