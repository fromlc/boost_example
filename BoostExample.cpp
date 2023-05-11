//------------------------------------------------------------------------------
// BoostExample.cpp
// 
// demos boost library:
// https://www.boost.org/doc/libs/1_82_0/more/getting_started/windows.html
//------------------------------------------------------------------------------
#include <boost/lambda/lambda.hpp>
#include <boost/lexical_cast.hpp>

#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>

//------------------------------------------------------------------------------
// using symbols
//------------------------------------------------------------------------------
using namespace boost::lambda;
using boost::lexical_cast;
using boost::bad_lexical_cast;

//------------------------------------------------------------------------------
// local function prototypes
//------------------------------------------------------------------------------
void lexCast(const std::string&);

//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
int main() {
    std::cout << "boost demo: lexical_cast() from string to int\n\n";
    std::cout << "enter numbers separated by a space\n";
    std::cout << "type the enter key after the last number on a line\n\n";

    typedef std::istream_iterator<std::string> in;

    std::for_each(
        in(std::cin), in(), lexCast);

    return 0;
}

//------------------------------------------------------------------------------
// test std::for_each() function pointer param
//------------------------------------------------------------------------------
void lexCast(const std::string& x) {
    int is = lexical_cast<int>(x);
    std::cout << "cast string " << x << " to int " << is << "\n\n";
}
