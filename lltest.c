#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node* next;
}typedef Node ;

struct dNode {
  int data;
  struct dNode* next;
  struct dNode* prev;
}typedef dNode ;

void print(Node* ptr){
  while(ptr!=NULL){
    printf("%d  ",ptr->data);
    ptr = ptr->next;
  }
  printf("\n");
}

void dprint(dNode* ptr){
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

dNode* createDNode(int data){
  dNode* newNode = (dNode*) malloc(sizeof(dNode));
  newNode->data = data;
  newNode->next = NULL;
  newNode->prev = NULL;
  return newNode;
}

Node* swap(Node* head, Node* x, Node* y){
  Node *xPos, *yPos, *xPrev, *yPrev;
  xPos=head;
  yPos=head;
  xPrev=NULL;
  yPrev=NULL;

  while(xPos!=NULL && xPos != x){
    xPrev=xPos;
    xPos = xPos->next;
  }

  while(yPos!=NULL && yPos != y){
    yPrev=yPos;
    yPos = yPos->next;
  }

  if (xPrev != NULL){
    xPrev->next=yPos;
  }
  else{
    head = yPos;
  }

  if (yPrev != NULL){
    yPrev->next=xPos;
  }
  else{
    head = xPos;
  }

  Node* temp = yPos->next;
  yPos->next = xPos->next;
  xPos->next = temp;

  return head;
}

dNode* deletePrev(dNode* head, dNode* p){
  if (p->prev == NULL){
    printf("There is no previos node to p\n");
    return head;
  }
  else if (p->prev->prev == NULL){
    dNode* temp = p->prev;
    head = p;
    free(temp);
    return head;
  } 
  else{
    dNode* temp = p->prev;
    temp->prev->next = p;
    p->prev = temp->prev;
    free(temp);
    return head;
  }
}

Node *reverse(Node * ptr){
  Node *prev = NULL;
  Node *next = NULL;
  Node *current = ptr;
  while (current != NULL){
    next = current->next;
      current->next = prev;
      prev = current;
      current = next;
  }
  return prev;
  }

int main(){
  Node *first, *second , *third, *fourth, *fifth;
  first = createNode(1);
  second = createNode(2);
  third = createNode(3);
  fourth = createNode(4);
  fifth = createNode(5);
  
  first->next=second;
  second->next=third;
  third->next = fourth;
  fourth->next=fifth;
  fifth->next = NULL;

  print(first);
  first=swap(first, third, fourth);
  print(first);
  first=swap(first, first, second);
  print(first);

  dNode *firstd, *secondd , *thirdd, *fourthd, *fifthd;
  firstd = createDNode(1);
  secondd = createDNode(2);
  thirdd = createDNode(3);
  fourthd = createDNode(4);
  fifthd = createDNode(5);
  
  firstd->next=secondd;
  firstd->prev = NULL;
  secondd->next=thirdd;
  secondd->prev=firstd;
  thirdd->next = fourthd;
  thirdd->prev = secondd;
  fourthd->next=fifthd;
  fourthd->prev = thirdd;
  fifthd->next = NULL;
  fifthd->prev = fourthd;
  dprint(firstd);
  firstd = deletePrev(firstd,firstd);
  dprint(firstd);
  firstd = deletePrev(firstd,secondd);
  dprint(firstd);
  firstd = deletePrev(firstd, fourthd);
  dprint(firstd);

}
