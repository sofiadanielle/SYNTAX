#include "Delimeter.cpp"

using namespace std;

int main(int argc, char **argv){
  bool run = true;
  
  Delimeter *d = new Delimeter();
  GenStack<string> *mainStack = d->stack;
  cout << argv[2] << endl;
  if(d->Stack(argv[2]) == false){
    return -1;
  }
  for(int i = d->lineCount; i > 0; --i){
    if(!d->readString(mainStack->pop(), i)){
      run = false;
      break
    }
  }
  if (!run){
    cout << "Ending program!" << endl;
  }
}