#include "Delimeter.h"

using namespace std;

Delimeter::Delimeter(){ //constructor
//  stack = new GenStack<string>();

  // set all count to 0
  lineCount = 0;
  leftBracket = 0;
  rightBracket = 0;
  leftParenthesis = 0;
  rightParenthesis = 0;
  leftCurly = 0;
  rightCurly = 0;
}

Delimeter::~Delimeter(){ //destructor
//  delete stack;
}

bool Delimeter::inStack(string fileName){
  ifstream inFS(fileName);
  bool run = true; // to use for while loop to continue

  //check for valid file
  if(!inFS.is_open()){ // file does not exist
    cout << "INVALID FILE NAME, please try again." << endl;
    cout << "Exiting program now." << endl;
    return 1;
  }
}

bool Delimeter::readString(string line, int lineCount){
  char curr = '\0';
  for(int i = 0; i < line.length(); ++i){ //parse each character in string
    curr = line[i];

    //series of if statements and count
    if (curr == '['){
      leftBracket++;
    } else if(curr == ']') {
      rightBracket;
    } else if(curr == '(') {
      leftParenthesis++;
    } else if(curr == ')') {
      rightParenthesis++;
    } else if(curr == '{') {
      leftCurly++;
    } else if(curr =='}'){
      rightCurly++;
    }
  }

  // error messages if [], (), {} are not equal
  if(leftBracket != rightBracket){
    if(leftBracket > rightBracket){
      cout << "Error found on line: " << lineCount << ". Missing right bracket ( ']' )." << endl;
    }
  } else if (leftParenthesis != rightParenthesis) {
    if (leftParenthesis > rightParenthesis){
      cout << "Error found on line: " << lineCount << ". Missing right parenthesis ( ')' )." << endl;
    }
  } else if (leftCurly != rightCurly){
    if (leftCurly > rightCurly){
      cout << "Error found on line: " << lineCount << ". Missing right curly brace ( '}' )." << endl;
    }
  }
  // if everything is equal
  else{
    cout << "All lines accounted for!" << endl;
  }

  return true;
}
