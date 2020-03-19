#include <iostream>

using namespace std;
//Write the function heading for a void function call "Max"
//that has three int parameters: num1, num2 and greatest. 
//The first two parameters receive data from the caller, and the greatest returns a value 

int main() {

}

void Max(int num1 , int num2, int greatest)
{
  if(num1 > num2)
  {
    greatest = num1;//determine the greatest number between num1 & num2
  }
  else
  {
    greatest = num2;
  }
  return; //no expression needed because the function return type is void

}