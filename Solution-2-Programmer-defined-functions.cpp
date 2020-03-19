#include <iostream>
#include <cmath>

using namespace std; 

//Function Prototype
//Programmer defined Function
double sinc(double x);

int main() {

   //Declare objects
  double a, b, x_incr, new_x, sinc_x;

  //Get interval endpoints from the user.
  cout << "Enter end points a and b (a<b): \n" ;
  cin >> a >> b;

  x_incr = (b-a)/20;

  //Set Formats
  cout.setf(ios::fixed);
  cout.precision(6);

  //Compute and print table of sinc(x) values
  cout << "x and sinc(x) values \n";
  for(int k=0; k<=20; ++k)
  {
    new_x = a + k * x_incr;
    cout << new_x << " " << sinc(new_x) << endl;
  }
  
}
/* This Function evaluates the sinc function*/
double sinc(double x)
{
  if(fabs(x) < 0.0001)
    {
      return 1.0;
    }
    else
    {
      return sin(x)/x;
    }
}
 