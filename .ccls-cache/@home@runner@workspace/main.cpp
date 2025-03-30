
#include <iostream>

int main() {
  
std::cout << "Geometry Calculator" << std::endl;
 int choice;
  std::cout << "1. Calculate the Area of a Circle" << std::endl;
  std::cout << "2. Calculate the Area of a Rectangle" << std::endl;
  std::cout << "3. Calculate the Area of a Triangle" << std::endl;
  std::cout << "4. Quit" << std::endl;
  std::cout << "Ener your choice (1-4): ";
  std::cin >> choice;
  if (choice == 1)
  
switch (choice) {
  case 1: {
    double radius;
    const double Pi = 3.14159;
    while (true) {
  std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    if (radius < 0) {
      std::cout << "Error. Radius cannot be negative." << std::endl;
    } else {
   double area = Pi * (radius * radius);
    std::cout << "The area of the circle is: " << area << std::endl;
    break;
  }
  case 2: {
    double length = 0.0, width = 0.0;
    
    std::cout << "Enter the length and width of the rectangle: ";
  std::cin >> length >> width; // Read both the length and width from the user
    if (length < 0 || width < 0) {
      std::cout << "Invaild input. Please enter positive numbers." << std::endl;
    } else {
    double area = length * width;
    std::cout << "The area of the rectangle is: " << area << std::endl;
    }
     break;
  }
 case 3: {
   double base = 0.0, height = 0.0;
      std::cout << "Enter the base and height of the triangle: "
        std::cin >> base >> height;
   if (base < 0 || height < 0)
     std::cout << "Invalid input. Please enter positive numbers." << std::endl;
 } else {
   double area = 0.5 * base * height;
   std::cout << "The area of the triangle is: " << area << std::endl;
 }
      break;
    }
     case 4:
        std::cout << "Quitting the program." << std::endl;
        break;
    default;
        std::cout << "Invalid choice. Please enter a number between 1 and 4." << std::endl;
  }
    return 0;
}
  
  