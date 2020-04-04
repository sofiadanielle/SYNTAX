#include "GenStack.h"
using namespace std;

//default constructor
GenStack::GenStack(){
  myArray = new char[128];
  mSize = 128;
  top = -1;
}

// overloaded constructor
GenStack::GenStack(int mSize){
  myArray = new char[mSize];
  mSize = mSize;
  top = -1;
}

// destructor
GenStack::~GenStack(){
  delete myArray;
}


// functions
void GenStack::push(char item){
  // if stack is full, extend/increase size
  if(isFull()){
    cout << "Stack is full, size increase needed." << endl;
  //  extendSize();
  } else {
  myArray[++top] = item;
  }
}

char GenStack::pop(){
  // if stack is empty, let user know
  if(isEmpty()){
    cout << "Stack is empty!" << endl;
    return 0;
  } else {
    return myArray[top--];
  }
}

char GenStack::peek(){
  //check if empty, so it won't peek an empty stack
  if(isEmpty()){
    cout << "Stack is empty!" << endl;
    return 0;
  } else {
  return myArray[top];
  }
}

bool GenStack::isFull(){
  return (top == mSize -1);
}

bool GenStack::isEmpty(){
  return (top == -1);
}
