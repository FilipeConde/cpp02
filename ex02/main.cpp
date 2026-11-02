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

  // extra tests

  Fixed c(1.52f);
  Fixed d(2.32f);
  Fixed e(2.32f);

  std::cout << "Must be 0: " << (c > d) << std::endl;
  std::cout << "Must be 1: " << (d > c) << std::endl;
  std::cout << "Must be 0: " << (d > d) << std::endl;

  std::cout << "Must be 1: " << (c < d) << std::endl;
  std::cout << "Must be 0: " << (d < c) << std::endl;
  std::cout << "Must be 0: " << (d < d) << std::endl;

  std::cout << "Must be 0: " << (c >= d) << std::endl;
  std::cout << "Must be 1: " << (d >= c) << std::endl;
  std::cout << "Must be 1: " << (d >= d) << std::endl;
  std::cout << "Must be 1: " << (d >= e) << std::endl;

  std::cout << "Must be 1: " << (c <= d) << std::endl;
  std::cout << "Must be 0: " << (d <= c) << std::endl;
  std::cout << "Must be 1: " << (d <= d) << std::endl;
  std::cout << "Must be 1: " << (d <= e) << std::endl;

  return (0);
}
