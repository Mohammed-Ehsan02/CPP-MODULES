/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:28:29 by mkhan             #+#    #+#             */
/*   Updated: 2023/02/06 10:28:50 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

# include <iostream>

template< typename T >
void	printElem(T const &elem)
{
	std::cout << elem << std::endl;
}

template< typename T >
void	iter(T *arr, int len, void(*f)(T const &elem))
{
	for (int i = 0; i < len; i++)
		f(arr[i]);
	
}

#endif