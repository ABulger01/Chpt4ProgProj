
#include <iostream>

int main() {
  int month, year;
  
  // Get user input
  std::cout << "Enter a month (1-12): ";
  std::cin >> month;
  
  // Validate month input 
  if (month < 1 || month > 12) {
    std::cout << "Invalid month input. Please enter a number between 1 and 12." << std::endl;
    return 1; 
  }
  
  // Get user year input
  std::cout << "Enter a year: ";
  std::cin >> year;

  // Determine if the year is a leap year
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
    std::cout << year << " is a leap year. February has 29 days." << std::endl;
  } else {
    std::cout << year << " is not a leap year. February has 28 days." << std::endl;
  }

  int days;
  // Determine the number of days in the month
  if (month == 2) {
    days = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0 ? 29 : 28;
  } else if (month == 4 || month == 6 || month == 9 || month == 11) {
    days = 30;
  } else {
    days = 31;
  }
  
  std::cout << "The month of " << month << " of year " << year << " has " << days << " days." << std::endl;
  return 0;
}
