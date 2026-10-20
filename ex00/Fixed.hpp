#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed{
  private:
    int fixedVal;
    static const int fractionalBits;

  public:
    // Constructors
    int getRawBits() const;
    void setRawBits(int const raw);
};

#endif