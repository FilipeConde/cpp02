#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed() : _fixedVal(0) {
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int val) : _fixedVal(val << _fractionalBits) {
    // std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float val) : _fixedVal(roundf(val * (1 << _fractionalBits))) {
    // std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) : _fixedVal(other._fixedVal) {
    // std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other) {
    // std::cout << "Copy assignment operator called" << std::endl;
    if(this != &other){
        this->_fixedVal = other._fixedVal;
    }
    return (*this);
}

Fixed::~Fixed(){
    // std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const{
    return (_fixedVal);
}

void Fixed::setRawBits(int const raw){
    _fixedVal = raw;
}

int Fixed::toInt() const{
    return (_fixedVal >> _fractionalBits);
}

float Fixed::toFloat( void ) const{
    return ((float)_fixedVal / (1 << _fractionalBits));
}

bool Fixed::operator>(const Fixed &rhs) const {
    return this->_fixedVal > rhs.getRawBits();
}

bool Fixed::operator<(const Fixed &rhs) const {
    return this->_fixedVal < rhs.getRawBits();
}

bool Fixed::operator>=(const Fixed &rhs) const {
    return this->_fixedVal >= rhs.getRawBits();
}

bool Fixed::operator<=(const Fixed &rhs) const {
    return this->_fixedVal <= rhs.getRawBits();
}

bool Fixed::operator==(const Fixed &rhs) const {
    return this->_fixedVal == rhs.getRawBits();
}

bool Fixed::operator!=(const Fixed &rhs) const {
    return this->_fixedVal != rhs.getRawBits();
}

Fixed Fixed::operator + (const Fixed &rhs) const {
    Fixed res;

    res.setRawBits(this->getRawBits() + rhs.getRawBits());
    return res;
}

Fixed Fixed::operator - (const Fixed &rhs) const {
    Fixed res;

    res.setRawBits(this->getRawBits() - rhs.getRawBits());
    return res;
}

Fixed Fixed::operator * (const Fixed &rhs) const {
    Fixed res;

    long long temp = ((long long)this->getRawBits() * rhs.getRawBits()) >> Fixed::_fractionalBits;
    res.setRawBits((int)temp);
    return res;
}

Fixed Fixed::operator / (const Fixed &rhs) const {
    Fixed res;

    long long temp = ((long long)this->getRawBits() << Fixed::_fractionalBits) / rhs.getRawBits();
    res.setRawBits((int)temp);
    return res;
}

Fixed &Fixed::operator ++ () {
    this->_fixedVal++;
    return *this;
}

Fixed Fixed::operator ++ (int) {
    Fixed temp(*this);
    this->_fixedVal++;
    return temp;
}

std::ostream &operator<<(std::ostream &out, const Fixed &src) {
    out << src.toFloat();
    return (out);
}
