#include <iostream>
#include "GenStack.cpp"
#include <fstream>
#include <string>
#include <stack>

using namespace std;

class Delimeter{
public:
  Delimeter(); // default constructor
  ~Delimeter(); // destructor

  int lineCount; // line count
  int leftBracket; // left bracket count
  int rightBracket; //right bracket count
  int leftParenthesis; // left parenthesis count
  int rightParenthesis; // right parenthesis count
  int leftCurly; // left curly braces count
  int rightCurly; // right curly braces count

  bool inStack(string fileName); // from file to stack
  bool readString(string line, int lineNum);// count of everything per line

  //GenStack<string> *stack;
};
