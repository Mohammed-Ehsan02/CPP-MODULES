/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:33:27 by mkhan             #+#    #+#             */
/*   Updated: 2023/02/09 13:52:05 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
#define MUTANTSTACK_TPP

#include "MutantStack.hpp"

template< typename T >
MutantStack<T>::MutantStack()
{}

template< typename T >
MutantStack<T>::MutantStack(MutantStack const &object)
{
	*this = object;
}

template< typename T >
MutantStack<T> & MutantStack<T>::operator=(MutantStack const &rhs)
{
	if (this != rhs)
	{
		this.
	}
	return(*this);
}

template< typename T >
MutantStack<T>::~MutantStack()
{}

template< typename T >
iterator MutantStack<T>::begin()
{
}

template< typename T >
iterator MutantStack<T>::end()
{
}

template< typename T >
const_iterator MutantStack<T>::begin() const
{
}

template< typename T >
const_iterator MutantStack<T>::end() const
{
}

#endif