//Is the following program valid? If so, what does it do? If not, why not?
#include <iostream>
#include <string>
int main()
{
{ const std::string s = "a string";
std::cout << s << std::endl; }
{ const std::string s = "another string";
std::cout << s << std::endl; }


// exp2 -->
//What about this one? What if we change }} to };} in the third line from the end?
{ const std::string s = "a string";
std::cout << s << std::endl;
{ const std::string s = "another string";
std::cout << s << std::endl; }}

/*this code also valid becz syntx is correct and as ';' semi colon means end of of the statmen so a';' dosnt throw any error */

//



return 0;
}


/*this program is valid --> becz the main block has 2 separate blocks and each block execute there block of code and the syntax is also correct --> so that why this code is valid */
