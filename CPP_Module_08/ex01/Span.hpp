/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:12:25 by mkhan             #+#    #+#             */
/*   Updated: 2023/02/06 15:17:37 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>

class Span
{
private:
	/* data */
public:
	Span();
	Span(int N);
	Span(Span const &object);
	Span & operator=(Span const &rhs);
	~Span();
	void	addNumber(int num);
	int		shortestSpan();
	int		longestSpan();
	void	addMoreNum();
};

#endif