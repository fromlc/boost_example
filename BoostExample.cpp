#include <boost/lambda/lambda.hpp>

#include <iostream>
#include <iterator>
#include <algorithm>

int main()
{
    using namespace boost::lambda;

    std::cout << "boost demo: istream_iterator multiplies by 3\n";
    std::cout << "enter numbers separated by a space\n";
    std::cout << "type the enter key after the last number on a line\n\n";

    typedef std::istream_iterator<int> in;

    std::for_each(
        in(std::cin), in(), std::cout << (_1 * 3) << "\n\n");
}