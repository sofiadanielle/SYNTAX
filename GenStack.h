#include <iostream>
using namespace std;

// using template class T
template<class T>

class GenStack{
public:
  GenStack(); // default constructor
  GenStack(int mSize); // overloaded constructor, max size of stack
  ~GenStack(); //destructor

  // functions needed
  void push(T item); //pushes an item/element/data on top
  T pop(); // top item gets popped off
  T peek(); // peeks at top of stack

  bool isFull(); //check if stack is full
  bool isEmpty(); // check if stack is empty

private:
  // variables
  int mSize; // size of stack, max
  int top; // index of array, top of the stack

  T *myArray; // stack's array
  T *tempArray; // temporary array

  void extendSize(); // if stack is full, increase size
};
