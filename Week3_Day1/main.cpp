/***********************************************************************
  Programmer: Dillon Hendrix
  Date: 09/05/2022
  Description: Manipulator Worksheet
***********************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  /* Lable parameters */
  // Hard coded parameters
  int c0;     // number of initial cases
  double r;   // growth rate factor
  double m;   // power polynomial

  // Calculated values 
  double ct;  // c(t)
  double A;   // equation constant related to equation 1

  // User input
  double t;  // weeks

  /* initialize model parameters */
  c0 = 10;
  r = 0.2;
  m = 1.65;
  t = 10;

  /* Input */
  // Request user input
  cout << "for modle where m = " << m << ", c0 = " << c0; // Thus equation 2 will work
  cout << ", and r = " << r << "  --->" << endl;
  cout << "Input t [weeks] for the sub-exponential growth model" << endl;
  cin >> t;

  /* Coversions and Calculations */
  // convert t from weeks to days
  t= t*7;

  // Solve 
  
  
    
}