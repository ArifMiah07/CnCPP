//What does the following program do if, when it asks you for input, you type two
//names (for example, Samuel Beckett)? Predict the behavior before running the program,
//then try it.

#include<iostream>
#include<string>

int main()
{
    std::cout << "What is your name? ";
    std::string name;
    std::cin >> name;
    std::cout << "Hello, " << name << std::endl << "What is your's ";

    //
    std::cin >> name;
    std::cout << "Hello, " << name << "; nice to meet you too!" << std::endl;


    return 0;
}

// out --> entering 2 names dont shows same time but 1st part shows as output of 1st input and 2nd part is shows as output of 2nd input_iterator_tag
