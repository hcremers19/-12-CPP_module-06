/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 10:18:36 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/28 10:43:04 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdint>
#include <iostream>

struct Data
{
	std::string str;
};


uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int	main()
{
	Data*		start_ptr;
	uintptr_t	nbr;
	Data*		end_ptr;

	start_ptr = new Data();
    start_ptr->str = "This is a string";

	std::cout << start_ptr << std::endl;
	std::cout << start_ptr->str << std::endl << std::endl;

	nbr = serialize(start_ptr);
	std::cout << nbr << std::endl << std::endl;

	end_ptr = deserialize(nbr);
	std::cout << end_ptr << std::endl;
	std::cout << end_ptr->str << std::endl;

	delete start_ptr;
	return (0);
}
