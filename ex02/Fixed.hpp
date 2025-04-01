#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    public:
        Fixed(void);
        Fixed(Fixed const & src);
        Fixed(int const constInt);
        Fixed(float const constFloat);
        ~Fixed();
        Fixed & operator=(const Fixed & rhs);
        bool operator>(const Fixed & rhs);
        bool operator<(const Fixed & rhs);
        bool operator>=(const Fixed & rhs);
        bool operator<=(const Fixed & rhs);
        bool operator==(const Fixed & rhs);
        bool operator!=(const Fixed & rhs);
        Fixed operator+(const Fixed & rhs) const;
        Fixed operator-(const Fixed & rhs) const;
        Fixed  operator*(const Fixed & rhs) const;
        Fixed operator/(const Fixed & rhs) const;
        Fixed & operator++();
        Fixed operator++(int);
        Fixed & operator--();
        Fixed operator--(int);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;

    private:
        int _value;
        static const int _fractionalBits = 8;

};

std::ostream & operator<<(std:: ostream & o, Fixed const & rhs);

#endif
