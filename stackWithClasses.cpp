#include <iostream>

class Stack{
  int top;
  int size;
  int* arr;

  public:

  Stack(int size){
    this->size = size;
    top = -1;
    arr = new int[this->size];  
  }

  bool isEmpty(){
    return this->top == -1;
  }

  bool isFull(){
    return this->top == this->size - 1;
  }

  void push(int value){
    if (this->isFull()){
      std::cout << "Stack Overflowed\n";
      return;
    }
    else{
      this->arr[++top] = value;  
    }
  }

  int pop(){
    if (this->isEmpty()){
      std::cout << "Stack Underflowed\n";
      return -1;
    }
    return this->arr[top--];
  }

  void print(){
    if (this->isEmpty()){
      std::cout << "Stack is empty\n";
    }
    else{
      for (int i = 0; i <= this->top; i++ ){
        std::cout << arr[i] << " ";  
      }
      std::cout << "\n";
    }
  }

  ~Stack(){
    delete[] arr;  
  }
};

int main(int argc, char** argv){
  Stack* s1 = new Stack(5);
  s1->push(10);
  s1->push(20);
  s1->print();
  int temp = s1->pop();
  s1->print();
  delete s1;  
  return 0;
}

