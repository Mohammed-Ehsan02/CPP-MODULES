/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:58:41 by mkhan             #+#    #+#             */
/*   Updated: 2023/02/06 14:16:04 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template< typename T >
class Array
{
	private:
		unsigned int	_size;
		T				*_arr;

	public:
		Array();
		Array(unsigned int n);
		Array(Array const &object);
		Array &operator=(Array const &rhs);
		T & operator[](unsigned int n);
		~Array();
		unsigned int	size() const;
};

# include "Array.tpp"

#endif