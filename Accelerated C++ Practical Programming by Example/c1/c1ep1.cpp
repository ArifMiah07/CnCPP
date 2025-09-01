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

// exp3 -->
// Is this program valid? If so, what does it do? If not, say why not, and rewrite it to
//be valid.
    {
        std::string s = "a string";
            {
                std::string x = s + ", really";
                std::cout << s << std::endl;
                std::cout << x << std::endl; // bring that line here
            }
        // std::cout << x << std::endl;
    }

// the og program is not valid --> variable x was declard another block scope as 1st block scope is not able to acess other block scope it throws an error
// after rewriting -->
// i fixed that error by moving [std::cout << x << std::endl;] in the inner scope --> program now showing expected correct output


//


return 0;
}


/*this program is valid --> becz the main block has 2 separate blocks and each block execute there block of code and the syntax is also correct --> so that why this code is valid */
