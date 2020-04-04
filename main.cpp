#include "Delimeter.cpp"

using namespace std;

int main(int argc, char **argv){
  bool run = true; // repeat

  Delimeter *item = new Delimeter();
//  GenStack<string> *mainStack = d->stack;

  cout << argv[2] << endl;
  if(item->stack(argv[2]) == false){ // argument isn't met
    return -1;
  }

  for(int i = item->lineCount; i > 0; --i){ // for loop
    if(!item->readString(stack->pop(), i)){
      run = false;
      break;
    }
  }

}
