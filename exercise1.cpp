// Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions to calculate the circle's area and circumference
#include <iostream>
#include <cmath>

const double PI = 3.14159;
class Circle
{
private:
    double radius;

public:
    Circle(double rad)
    {
        radius = rad;
    }

    double calculateArea()
    {
        return pow(radius, 2) * 3.14159;
    }

    double calculateCircumference()
    {
        return 2 * 3.14159 * radius;
    }
};

int main()
{
    double radius;
    std::cout << "What is the radius of the circle you want to calculate its area dnd circumference ";
    std::cin >> radius;

    Circle myCircle(radius);

    std::cout << "Area of circle: " << myCircle.calculateArea() << std::endl;
    std::cout << "Circumference of circle: " << myCircle.calculateCircumference();

    return 0;
}