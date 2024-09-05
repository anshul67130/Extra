#include <stdio.h>
#include <stdlib.h>

struct stack {
  int size;
    int top;
    int* arr;
};

int isEmpty(struct stack* s){
    if (s->top==-1)
        return 1;
    return 0;
}

int isFull(struct stack* s){
    if (s->top==s->size-1)
        return 1;
    return 0;
}

int push(struct stack* s,int value){
    if (isFull(s)){
        printf("Stack overflowed\n");
        return -1;
    }
    s->arr[++s->top] = value;
    return 0;
}

int pop(struct stack* s){
    if (isEmpty(s)){
        printf("Stack underflowed\n");
        return 1;
    }
    return s->arr[s->top--];
}

void display(struct stack* s){
  if (isEmpty(s)){
    printf("Stack is Empty\n");
    return;
  }
  else{
    for (int i=0; i<s->top+1; i++){
      printf("%d  ",s->arr[i]);
    }
    printf("\n");
  }
}

int main(){
    // struct stack s;
    // s.size = 80;
    // s.top = -1;
    // s.arr = (int*) malloc(sizeof(int)*s.size);
    
    struct stack *s;

    s->size = 80;
    s->top = -1;
    s->arr = (int*) malloc(sizeof(int)*s->size);

    push(s,10);

    push(s,20);
    push(s,30);
    push(s,40);
    push(s,50);
    display(s);
    int temp=pop(s);
    display(s);
    printf("%d\n",temp);
    return 0;
}
