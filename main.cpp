#include <iostream>
using namespace std;

int main() { 
  float milesDriven = 375; 
  float gallonsUsed = 15;

  cout << "How many gallons of gas did you use? ";
  cin >> gallonsUsed;

  cout << "How many miles did you travel? ";
  cin >> milesDriven;
  
  float milesPerGallon = milesDriven / gallonsUsed; //formula for miles per gallon
  
  cout << "After using " << gallonsUsed << " gal and traveling " << milesDriven << " mi your miles per gallon is " << milesPerGallon << " mpg. "; //outputs the information
}