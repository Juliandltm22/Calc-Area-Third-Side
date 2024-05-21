#include <bits/stdc++.h> // This header includes all of the libraries

int main(){

    std::cout << "Welcome to this program!\n";
    std::cout << "This software was built by and maintained by Systems Programmer Julian De La Torre \n";
    std::cout << "This program will manage all of your triangles \n\n";

// =================================================================================
    time_t now = time(0); // get current date and time  
  
    tm* ltm = localtime(&now);  
  
// print various components of tm structure.
    std::cout << "Month: " << 1 + ltm->tm_mon << "\n"; // print month number
    std::cout << "Day: " << ltm->tm_mday << "\n"; // print the day
    std::cout << "Year: " << 1900 + ltm->tm_year << "\n"; // print the year  
// ================================================================================

  

    float first_side;
    float second_side;
    float height;

    std::cout << "\n\nEnter your first side: ";
    std::cin >> first_side;
    std::cout << "Enter your second side: ";
    std::cin >> second_side;
    std::cout << "Enter the height of your triangle: ";
    std::cin >> height; 
    std::cout << "Your inputs are " << first_side << " " << second_side << " and " << height << "\n";


// Calculating area
    float side1_x_height = first_side * height;
    float side1_X_height_div_2 = side1_x_height / 2; 
    float math_done = side1_X_height_div_2; 
    std::cout << "The area of this triangle is " << math_done << " square units \n";



// Calculating third_side
    float side_1_squared = first_side * first_side;
    float side_2_squared = second_side * second_side;
    float third_side = side_1_squared + side_2_squared;
    std::cout << "The length of the third side of the triangle is " << third_side << " linear units \n"; 
}
