/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FIXED.HPP                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 17:33:36 by mkhan             #+#    #+#             */
/*   Updated: 2023/01/16 17:50:48 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int					_fixed;
		static const int	_bits = 8;
	public:
		Fixed();
		Fixed(const	int num);
		Fixed(const	float num);
		Fixed(Fixed const &Object);
		~Fixed();
		Fixed	&operator= (Fixed const &rhs);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

#endif