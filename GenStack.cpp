#include "GenStack.h"
using namespace std;

//default constructor
template <class T>
GenStack<T>::GenStack(){
  myArray = new T[mSize];
  max = mSize;
  top = -1;
}

// overloaded constructor
template <class T>
GenStack<T>::GenStack(int mSize){
  myArray = new T[max];
  mSize = max;
  top = -1;
}

// destructor
template <class T>
GenStack<T>::~GenStack(){
  delete []myArray;
}


// functions

template <class T>
void GenStack<T>::push(T item){
  // if stack is full, extend/increase size
  if(isFull()){
    cout << "Stack is full, size increase needed." << endl;
    extendSize();
  } else {
  myArray[++top] = item;
  }
}

template <class T>
T GenStack<T>::pop(){
  // if stack is empty, let user know
  if(isEmpty()){
    cout << "Stack is empty!" << endl;
    return 0;
  } else {
    return myArray[top--];
  }
}

template <class T>
T GenStack<T>::peek(){
  //check if empty, so it won't peek an empty stack
  if(isEmpty()){
    cout << "Stack is empty!" << endl;
    return 0;
  } else {
  return myArray[top];
  }
}

template <class T>
bool GenStack<T>::isFull(){
  return (top == mSize - 1);
}

template <class T>
bool GenStack<T>::isEmpty(){
  return (top == - 1);
}

//extend ...
// template <class T>
// void GenStack<T>::extendSize(){
//   tempArray = new T[++mSize];
//   for(int i = -1; i <= top; ++i){
//     tempArray[i] = myArray[i]
//   }
//
//   delete[] myArray;
//   myArray = tempArray;
// }
