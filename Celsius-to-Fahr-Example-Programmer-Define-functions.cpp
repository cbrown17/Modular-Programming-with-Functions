/* This performs a conversion from degrees Celsius to degrees Fahrenheit. 
Precondition: celsius holds a temperature in degrees celsius 
Postcondition: returns degrees Fahrenheit*/
#include <iostream>

using namespace std;  

double CelsiusToFahr(double Celsius)//function header
{
  //Declare local variables 
  double temp; //Fahrenheit vaule 

  //convert from degrees Celsius to degrees Fahrenheit
  temp = (9.0/5.0)*Celsius + 32.0;

  return temp; //returns the value of temp
}
int main() {

  cout << CelsiusToFahr(23.56) << endl;
  cout << CelsiusToFahr(45.6);

  
}