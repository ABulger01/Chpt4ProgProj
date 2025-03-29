
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
  
