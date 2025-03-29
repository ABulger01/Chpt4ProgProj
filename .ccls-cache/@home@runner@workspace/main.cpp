
#include <iostream>
using namespace std;

int main() {
  double weight;
  int distance; 
  double rate;
  double total;
  cout << "Enter the weight of the package: ";
  cin >> weight;
  if ( weight <= 0 || weight > 20) {
    cout << "Invalid weight, please enter a weight between 0 and 20.";
    return 1;
    
  }
  // Get user input for distance to be shipped
  cout << "Enter the distance to be shipped:";
  cin >> distance;
  if (distance < 10 || distance > 3000) 
    cout << "Invalid distance, please enter a distance between 10 and 3000.";
  return 1;
  // Calculate the rate based on weight
  double rate;
  if (weight <= 2)
    rate = 1.10;
  else if ( weight <= 6)
      
  
