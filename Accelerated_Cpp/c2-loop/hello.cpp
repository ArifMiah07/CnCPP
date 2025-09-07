#include<iostream>
#include<string>

int main()
{
    // ask for the person's name
    std::cout << "Plz Enter your first name: ";
    
    // read the name
    std::string name;
    std::cin >> name;

    // build the message that we intend to write
    const std::string greeting = "Hello, " + name + "!";

    // we have to rewrite this part...

    // the number of black surrounding the greeding
    const int pad = 1;

    // total number of rows to write
    const int rows = pad * 2 + 3;

    // separate the output from the input
    std::cout << std::endl;

    // write rows rows of output
    // invariant: we have written r rows so far
    int r = 0;

    // setting r to 0 makes invariant true
    while(r != rows){
        // we can assume that the invariant is true here
        // writing a row of output makes the invariant false
        std::cout << std::endl;
        // incrementing r makes the invariants true again
        ++r;
    }
    // we can conclude that the invariant is true here

    //
    const std::string::size_type cols = greeting.size() + pad * 2 + 2;

    // 
    std::string::size_type c = 0;
    // invariant : we have written c character so far in the current row
    while(c != cols){
        // write one or more characters
        // adjust the value of c to maintain the invariant
        if(r == 0 || r == rows - 1 || c == 0 || c == cols - 1){
            std::cout << "*";
        }else{
            // write on or more nonborder characters
            /// adjust the value of c to maintain the invariant
        }
    }



    return 0;
}