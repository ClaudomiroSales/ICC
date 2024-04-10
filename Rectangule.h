// Define a Rectangle class with member functions
class Rectangle {
private:
    float length;
    float width;

public:
    // Constructor
    Rectangle(float l, float w) : length(l), width(w) {}

    // Member function to calculate area
    float calculateArea() {
        return length * width;
    }

    // Member function to calculate perimeter
    float calculatePerimeter() {
        return 2 * (length + width);
    }
};