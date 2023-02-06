/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:59:01 by mkhan             #+#    #+#             */
/*   Updated: 2023/02/06 14:42:48 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# include "Array.hpp"

template< typename T>
Array<T>::Array(): _size(0), _arr(0)
{
}

template< typename T>
Array<T>::Array(unsigned int n): _size(n), _arr(new T[n])
{	
}

template< typename T>
Array<T>::Array(Array const &object): _size(0), _arr(0)
{
	*this = object;
}

template< typename T>
Array<T> & Array<T>::operator=(Array const &rhs)
{
	if (this != &rhs)
	{
		if (this->_arr && this->_size)
			delete[] this->_arr;
		this->_size = rhs._size;
		this->_arr = new T[rhs._size];
		for (unsigned int i = 0; i < this->_size; i++)
			this->_arr[i] = rhs._arr[i];
	}
		
	return (*this);
}

template< typename T>
Array<T>::~Array()
{
	delete [] this->_arr;
}

template< typename T>
T &Array<T>::operator[](unsigned int n)
{
	if (n < 0 || n >= this->_size)
		throw std::runtime_error("Index out of bound");
	return this->_arr[n];
}

template< typename T>
unsigned int	Array<T>::size() const
{
	return (this->_size);
}

#endif