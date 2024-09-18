#include <iostream>
using namespace std;

int main() { 
  float milesDriven = 375; //miles driven and gallons used given in problem statement
  float gallonsUsed = 15;
  float milesPerGallon = milesDriven / gallonsUsed; //formula for miles per gallon

  cout << "After using " << gallonsUsed << "gal and traveling " << milesDriven << "mi your miles per gallon is " << milesPerGallon << "mpg. "; //outputs the information
}