/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:13:21 by mkhan             #+#    #+#             */
/*   Updated: 2023/02/07 16:40:30 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{}

Span::Span(unsigned int N): _max(N)
{}

Span::Span(Span const &object)
{
	*this = object;
}

Span & Span::operator=(Span const &rhs)
{
	if (this != &rhs)
	{
		this->_max = rhs._max;
		this->_vec = rhs._vec;
	}
	return (*this);
}

Span::~Span()
{}

void	Span::addNumber(int num)
{}

int	Span::shortestSpan()
{}

int	Span::longestSpan()
{}

void	Span::addMoreNum()
{}