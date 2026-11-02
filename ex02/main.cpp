#include <iostream>
#include "Fixed.hpp"

int main(){

  // Fixed a;
  // Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
  // std::cout << a << std::endl;
  // std::cout << ++a << std::endl;
  // std::cout << a << std::endl;
  // std::cout << a++ << std::endl;
  // std::cout << a << std::endl;
  // std::cout << b << std::endl;
  // std::cout << Fixed::max( a, b ) << std::endl;

  // int a = 1;
  // int b = 0;

  Fixed c(1.5f);
  Fixed d(2.3f);
  // std::cout << (a > b) << std::endl;
  std::cout << (c > d) << std::endl;

  return (0);
}
