// Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.
#include <iostream>

class Person
{
private:
    std::string name;
    std::string country;
    int age;

public:
    void setName(std::string personName)
    {
        name = personName;
    }

    void setCountry(std::string nationality)
    {
        country = nationality;
    }

    void setAge(int realAge)
    {
        age = realAge;
    }

    std::string getName()
    {
        return name;
    }

    std::string getCountry()
    {
        return country;
    }

    int getAge()
    {
        return age;
    }
};

int main()
{

    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;

    std::string country;
    std::cout << "Enter your country ";
    std::cin >> country;

    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << std::endl;

    Person person;

    person.setName(name);
    person.setCountry(country);
    person.setAge(23);

    std::cout << "Name: " << person.getName() << std::endl;
    std::cout << "Age: " << person.getAge() << std::endl;
    std::cout << "Country: " << person.getCountry() << std::endl;

    return 0;
}