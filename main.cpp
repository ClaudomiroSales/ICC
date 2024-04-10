#include <stdio.h>
#include <iostream>
using std::cout;
#include "Rectangule.h"

// Define a function to calculate the area of a rectangle
float calculateRectangleArea(float length, float width) {
    return length * width;
}

// Define a function to calculate the perimeter of a rectangle
float calculateRectanglePerimeter(float length, float width) {
    return 2 * (length + width);
}

int main() {
    // Procedural approach: Perform calculations using functions
    float length = 5.0;
    float width = 3.0;
    
    float area = calculateRectangleArea(length, width);
    float perimeter = calculateRectanglePerimeter(length, width);
    
    printf("Rectangle Area: %.2f\n", area);
    printf("Rectangle Perimeter: %.2f\n", perimeter);


    Rectangle rectangle(length, width);    
    cout <<"\nUsing OOP\n";   
    cout << "Rectangle Area: " << rectangle.calculateArea() << '\n';
    cout << "Rectangle Perimeter: " << rectangle.calculatePerimeter() << '\n';
    
    return 0;
}
