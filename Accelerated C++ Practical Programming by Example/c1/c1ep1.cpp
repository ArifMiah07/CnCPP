//Is the following program valid? If so, what does it do? If not, why not?
#include <iostream>
#include <string>
int main()
{
{ const std::string s = "a string";
std::cout << s << std::endl; }
{ const std::string s = "another string";
std::cout << s << std::endl; }
return 0;
}


/*this program is valid --> becz the main block has 2 separate blocks and each block execute there block of code and the syntax is also correct --> so that why this code is valid */
