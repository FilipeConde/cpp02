#include "Fixed.hpp"

Fixed::Fixed() : _fixedVal(0) {}

Fixed::Fixed(const Fixed &other) : _fixedVal(other._fixedVal) {}

Fixed &Fixed::operator=(const Fixed &other) {
    if(this != &other){
        this->_fixedVal = other._fixedVal;
    }
    return (*this);
}



//   private:
//     int _fixedVal;
//     static const int _fractionalBits;

//   public:
//     // Constructors
//     Fixed();
//     Fixed(const Fixed &other);
//     Fixed& operator=(const Fixed &other);
//     ~Fixed();
//     int getRawBits() const;
//     void setRawBits(int const raw);
