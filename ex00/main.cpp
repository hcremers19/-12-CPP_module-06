/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:54:00 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/27 18:39:56 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int	main(int argc, char** argv)
{
	if (argc != 2)																// Checks number of arguments
	{
		std::cerr << "Error: number of arguments" << std::endl;
		return (1);
	}
	std::string	str(argv[1]);

	if (str.length() != 1 &&													// Eliminates strings
	str != "inf" && str != "inff" &&
	str != "-inf" && str != "-inff" &&
	str != "nan" && str != "nanf" &&
	(str[0] < '0' || '9' < str[0]) &&
	str[0] != '+' && str[0] != '-')
	{
		std::cout << "char:   Non displayable" << std::endl;
		std::cout << "int:    Non displayable" << std::endl;
		std::cout << "float:  Non displayable" << std::endl;
		std::cout << "double: Non displayable" << std::endl;
		return (0);
	}

	Convert	nb(argv[1]);														// Converts

	if (nb.getIsChar())															// Displays
		std::cout << "char:   '" << nb.getCharVal() << "'" << std::endl;
	else
		std::cout << "char:   Non displayable" << std::endl;

	if (nb.getIsInt())
		std::cout << "int:    " << nb.getIntVal() << std::endl;
	else
		std::cout << "int:    Non displayable" << std::endl;

	if (nb.getFloatVal() == static_cast<int>(nb.getFloatVal()) &&
	-999999 <= nb.getFloatVal() && nb.getFloatVal() <= 999999)
	{
		std::cout << "float:  " << nb.getFloatVal() << ".0f" << std::endl;
		std::cout << "double: " << nb.getDoubleVal() << ".0" << std::endl;
	}
	else
	{
		std::cout << "float:  " << nb.getFloatVal() << "f" << std::endl;
		std::cout << "double: " << nb.getDoubleVal() << std::endl;
	}

	return (0);
}
