#include <iostream>
#include <string>
#include <stdlib.h> 
#include <stddef.h>                                      
#include <unistd.h>

using namespace std;

int Hundred = 100;

int input1;
int input2;
int type;

namespace CommandStuff{
const char* HelpCommands =
"Current List Of Commands:\n"
"1 = Addition\n"
"2 =  Subtraction\n"
"3 = Multiplication\n"
"4 = Division\n"
"5 = Decimal To Percent\n"
"6 = Help\n"
"7 = Descriptions Of Commands\n"
;

const char* Descriptions = 
"Addition - Adds 2 Numbers Together\n"
"Subtraction - Subtracts 2 Numbers\n"
"Multiplication - Multiplys 2 Numbers\n"
"Division - Divides 2 Numbers\n"
"Decimal To Percent - Converts An Decimal To A Percent"
"Help - Shows A List Of Commands\n"
;
}

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
  void Decimal2Percent(){
    std::cout << "Answer: " << input1 * Hundred << "% \n";
  }
  void Percent2Decimal(){
    std::cout << "Answer: " << input1 / Hundred << "\n";
  }
}

int main(){

  std::cout << CommandStuff::HelpCommands;

  while (true){
    cin >> type;
    if (type == 1){
    std::cout << "Now Put In 2 Numbers \n";
    cin >> input1 >> input2;
    Calculator::Add();
  }
  else if (type == 2){
    std::cout << "Now In 2 Numbers \n";
    cin >> input1 >> input2;
    Calculator::Subtract();
  }
  else if (type == 3){
    std::cout << "Now Put In 2 Numbers \n";
    cin >> input1 >> input2;
    Calculator::Multiply();
  }
  else if (type == 4){
    std::cout << "Now Put In 2 Numbers \n";
    cin >> input1 >> input2;
    Calculator::Divide();
  }
  else if (type == 5){
    std::cout << "Put In The Number You Would Like To Convert From An Decimal To A Percent \n";
    cin >> input1;
    Calculator::Decimal2Percent();
  }
  else if (type == 6){
    std::cout << CommandStuff::HelpCommands;
  }
  else if (type == 7){
    std::cout << CommandStuff::Descriptions;
  }
  }
}
