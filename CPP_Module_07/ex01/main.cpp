/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhan <mkhan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:28:14 by mkhan             #+#    #+#             */
/*   Updated: 2023/02/06 10:28:21 by mkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

// void	printElem(int const &elem)
// {
// 	std::cout << elem << std::endl;
// }

int	main()
{
	int intArr[5] = {1, 2, 3, 4, 5};
	iter(intArr, 5, printElem);

	char charArr[5] = {'a', 'b', 'c', 'd', 'e'};
	iter(charArr, 5, printElem);
	return (0);
}