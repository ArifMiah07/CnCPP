// ask for a person's name, and greet the person

#include<iostream>
#include<string>

int main()
{
    // ask for the person name
    std::cout << "Plz enter ur name: ";
    // read the name
    std::string name; // define name
    std::cin >> name; //read name

    // write a greeting
    std::cout << "Hello, " << name << "!" << std::endl;
    return 0;
}
