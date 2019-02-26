#include <iostream>
#include <string>
#include <stdlib.h> 
#include <stddef.h>                                      
#include <unistd.h>

using namespace std;

int input1;
int input2;
int type;

const char* helpCommands =
"1. Addition\n"
"2. Subtraction\n"
"3. Multiplication\n"
"4. Division\n"
"5. Help\n"
;

namespace Calculator{
  void Add(){
      std::cout << "Answer: " << input1 + input2 << "\n";
  }
  void Subtract(){
    std::cout << "Answer: " << input1 - input2 << "\n";
  }
  void Multiply(){
    std::cout << "Answer: " << input1 * input2 << "\n";
  }
  void Divide(){
    std::cout << "Answer: " << input1 / input2 << "\n";
  }
}

int main(){

  std::cout << "Which Of The Following Would You Like To Do: \n 1. Addition \n 2. Subtraction  \n 3. Multiplication  \n 4. Division\n 5. Help\n";
  while (true){
    cin >> type;
    if (type == 1){
    std::cout << "Now Put In 2 Numbers \n";
    cin >> input1 >> input2;
    Calculator::Add();
    std::cout << "Choose What You Would Like To Do Next (Say '5' For The List Of Commands\n";
  }
  else if (type == 2){
    std::cout << "Now In 2 Numbers \n";
    cin >> input1 >> input2;
    Calculator::Subtract();
    std::cout << "Choose What You Would Like To Do Next (Say '5' For The List Of Commands\n";
  }
  else if (type == 3){
    std::cout << "Now Put In 2 Numbers \n";
    cin >> input1 >> input2;
    Calculator::Multiply();
    std::cout << "Choose What You Would Like To Do Next (Say '5' For The List Of Commands\n";
  }
  else if (type == 4){
    std::cout << "Now Put In 2 Numbers \n";
    cin >> input1 >> input2;
    Calculator::Divide();
    std::cout << "Choose What You Would Like To Do Next (Say '5' For The List Of Commands\n";
  }
  else if (type == 5){
    std::cout << helpCommands;
    std::cout << "Choose What You Would Like To Do Next (Say '5' For The List Of Commands Again \n";
  }
  }
}
