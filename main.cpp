
#include <iostream>
using namespace std;

int main() {
  double weight;
  int distance; 
  double rate;
  // Get the weight of the packages
  if (true) { 
  cout << "Enter the weight of the package";
  // Pause the program and wait for the user to enter a value
  cin >> weight;
if ( weight <= 0 || weight > 20)
  cout << "Invalid weight, Please enter a weight between 0 and 20";
    else if ( weight > 0 && weight <= 20 )
      cout << " Valid weight";
}
  
  // Get user input for distance to be shipped
  cout << "Enter the distance to be shipped:";
  cin >> distance;
  if (distance < 10 || distance > 3000) 
    cout << "Invalid distance, please enter a distance between 10 and 3000.";

  // Calculate the rate  per 500 miles based on weight
  if (weight <= 2)
    rate = 1.10;
  else if ( weight <= 6)
      rate = 2.20;
  else if ( weight <= 10) 
      rate = 3.70;
  else if ( weight > 10 && weight <= 20)
      rate = 4.80;
// Calculate the total charges
  double total = rate * (distance / 500.0);
  // DIsplay the total charges
  cout << "Total charges: $" << total << endl;
  return 0;
}
