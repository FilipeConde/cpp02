#include <iostream>
#include "Fixed.hpp"
#include <cmath>

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
  
  std::cout << "Must be 0: " << (c == d) << std::endl;
  std::cout << "Must be 1: " << (d == d) << std::endl;
  std::cout << "Must be 1: " << (d == e) << std::endl;

  std::cout << "Must be 1: " << (c != d) << std::endl;
  std::cout << "Must be 0: " << (d != d) << std::endl;
  std::cout << "Must be 0: " << (d != e) << std::endl;

  std::cout << "Must be appr. 3.84: " << (c + d) << std::endl;
  std::cout << "Must be appr. -0.8: " << (c - d) << std::endl;
  std::cout << "Must be appr. 3.5264: " << (c * d) << std::endl;
  std::cout << "Must be appr. 0.655172414: " << (c / d) << std::endl;

  std::cout << "Var 'c' must be  1.51935: " << c << std::endl;
  std::cout << "Must be appr. 1.52344: " << ++c << std::endl;
  
  c.setRawBits(roundf(1.52f * (1 << 8))); // restore value
  std::cout << "Must be 1.51953: " << (c++) << std::endl;
  std::cout << "Var 'c' must be  1.52344: " << c << std::endl;
  
  c.setRawBits(roundf(1.52f * (1 << 8)));
  std::cout << "Var 'c' must be  1.51935: " << c << std::endl;
  std::cout << "Must be appr. 1.51562: " << --c << std::endl;
  
  c.setRawBits(roundf(1.52f * (1 << 8))); // restore value
  std::cout << "Must be 1.51953: " << (c--) << std::endl;
  std::cout << "Var 'c' must be  1.51562: " << c << std::endl;

  return (0);
}
