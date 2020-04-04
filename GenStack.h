#include <iostream>
using namespace std;

class GenStack{
public:
  GenStack(); // default constructor
  GenStack(int mSize); // overloaded constructor, max size of stack
  ~GenStack(); //destructor

  // functions needed
  void push(char item); //pushes an item/element/data on top
  char pop(); // top item gets popped off
  char peek(); // peeks at top of stack

  bool isFull(); //check if stack is full
  bool isEmpty(); // check if stack is empty

private:
  // variables
  int mSize; // size of stack, max
  int top; // index of array, top of the stack

  char *myArray;

  //void extendSize(); // if stack is full, increase size
};
