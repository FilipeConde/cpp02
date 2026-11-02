#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed{
  private:
    int _fixedVal;
    static const int _fractionalBits;

  public:
    Fixed();
    Fixed(const int val);
    Fixed(const float val);
    Fixed(const Fixed &other);
    Fixed& operator=(const Fixed &other);
    ~Fixed();

    float toFloat( void ) const;
    int toInt( void ) const;

    int getRawBits() const;
    void setRawBits(int const raw);

    bool operator > (const Fixed &other) const;
    bool operator < (const Fixed &other) const;
    bool operator >= (const Fixed &other) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &src);

#endif