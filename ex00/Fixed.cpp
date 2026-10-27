#include "Fixed.hpp"

Fixed::Fixed() : _fixedVal(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) : _fixedVal(other._fixedVal) {
    std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other) {
    if(this != &other){
        this->_fixedVal = other._fixedVal;
    }
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const{
    return (_fixedVal);
}

void Fixed::setRawBits(int const raw){
    _fixedVal = raw;
}

//   private:
//     int _fixedVal;
//     static const int _fractionalBits;

//   public:
//
// OK  Fixed();
// OK  Fixed(const Fixed &other);
// OK  Fixed& operator=(const Fixed &other);
// OK  ~Fixed();
// OK  int getRawBits() const;
// OK  void setRawBits(int const raw);
