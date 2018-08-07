#include <boost/lambda/lambda.hpp>
#include <iostream>
#include <iterator>
#include <algorithm>


/**
   Boost Example
   =============

   * https://www.boost.org/doc/libs/1_67_0/more/getting_started/unix-variants.html

   * Compile via: `c++ -I <path/to/boost> boost_example.cpp -o boost_example`.
   * Run via: `echo 1 2 3 | ./boost_example`.

   Since I used pacman to install Boost, all of it's libraries are in
   `/usr/lib` (https://www.archlinux.org/packages/extra/x86_64/boost-libs/),
   and files are in `/usr/include/boost`
   (https://www.archlinux.org/packages/extra/x86_64/boost/) so my compile
   string was:

   `c++ boost_example.cpp -o boost_example && echo 1 2 3 | ./boost_example`

   Boost.Build
   -----------

   * Added `Jamroot.jam`.
   * Compile string on my system is now (FIXME: When `b2` guesses `gcc`, the
     build fails. Assume it's grabbing a different version??):

     `b2 toolset=gcc && echo 1 2 3 | bin/gcc-8.2.0/debug/./boost_example`
   :
 */
int main() {
    using namespace boost::lambda;
    typedef std::istream_iterator<int> in;

    std::for_each(
        in(std::cin), in(), std::cout << (_1 * 3) << " " );
}
