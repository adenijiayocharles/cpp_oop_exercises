// Write a C++ program to create a class called Rectangle that has private member variables for length and width. Implement member functions to calculate the rectangle's area and perimeter
#include <iostream>

class Rectangle
{
private:
    double length;
    double width;

public:
    Rectangle(double len, double wid)
    {
        length = len;
        width = wid;
    }

    double calculateArea()
    {
        return length * width;
    }

    double calculatePerimeter()
    {
        return 2 * (length + width);
    }
};

int main()
{
    double width;
    double length;

    std::cout << "Enter the width of your rectangle: ";
    std::cin >> width;

    std::cout << "Enter the length of your rectange: ";
    std::cin >> length;

    Rectangle rectange(length, width);
    double area = rectange.calculateArea();
    std::cout << "Area of your rectangle " << area << std::endl;

    double perimeter = rectange.calculatePerimeter();
    std::cout << "Perimeter of your rectangle " << perimeter << std::endl;

    return 0;
}