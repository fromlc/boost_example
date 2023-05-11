#include <boost/lambda/lambda.hpp>
//#include <boost/lexical_cast.hpp>
//using boost::lexical_cast;
//using boost::bad_lexical_cast;

#include <iostream>
#include <iterator>
#include <algorithm>

int main()
{
    using namespace boost::lambda;

    std::cout << "boost demo: istream_iterator multiplies by 3\n\n";

    typedef std::istream_iterator<int> in;

    std::for_each(
        in(std::cin), in(), std::cout << (_1 * 3) << "\n");
}