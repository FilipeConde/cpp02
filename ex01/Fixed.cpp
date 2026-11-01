#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed() : _fixedVal(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int val) : _fixedVal(val << _fractionalBits) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float val) : _fixedVal(val * (1 << _fractionalBits)) {
    std::cout << "Float constructor called" << std::endl;
    std::cout << "Float val: " << _fixedVal << std::endl;
}

Fixed::Fixed(const Fixed &other) : _fixedVal(other._fixedVal) {
    std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other) {
    std::cout << "Copy assignment operator called" << std::endl;
    getRawBits();
    if(this != &other){
        this->_fixedVal = other._fixedVal;
    }
    return (*this);
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const{
    std::cout << "getRawBits member function called" << std::endl;
    return (_fixedVal);
}

void Fixed::setRawBits(int const raw){
    _fixedVal = raw;
}

int Fixed::toInt() const{
    return (_fixedVal >> _fractionalBits);
}
