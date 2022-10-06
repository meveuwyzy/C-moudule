#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
	private:
		int					_fixpoint;
		static const int	_fbits = 8;
	public:
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		Fixed&	operator=(const Fixed&);
		Fixed(const Fixed&);
		Fixed();
		~Fixed();
};
#endif
