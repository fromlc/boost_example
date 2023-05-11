#include <boost/lexical_cast.hpp>
using boost::lexical_cast;
using boost::bad_lexical_cast;

#include <iostream>

int main()
{
    std::cout << "boost demo: lexical_cast\n\n";

    int is = lexical_cast<int>("1234");

    return 0;
}