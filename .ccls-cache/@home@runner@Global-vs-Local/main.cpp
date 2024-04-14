#include <iostream>
using namespace std;

// variable declared outside of a function
// is *global* - can be seen by any function in program
int x = 1000;

// function prototypes for functions defined following main function 
void printX();
void printX2();

int main() {

  // variable declared inside of a function 
  // is *local* - can only be seen in that function 
  // local x will hide the global x 
  int x = 10;

  cout << "\nInside main function print local x: ";
  cout << x << "\n";
  cout << "Inside main function print global x using ::x " << ::x << "\n";

  // call functions 
  printX();
  printX2();
}

void printX(){
  // no variable called x declared locally
  // function will find the global variable x
  // and output its value 
  cout << "\n\nInside printX function with no local x, print global x: ";
  cout << x << "\n";
}

void printX2(){
  // variable declared inside of a function 
  // is *local* - can only be seen inside that function 
  // local x will hide the global x
  int x = 555; 
  cout << "\n\nInside printX2 function print local x: ";
  cout << x << "\n";
}