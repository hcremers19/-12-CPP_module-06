/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 10:44:48 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/28 12:15:41 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Classes.hpp"

Base*	generate()
{
	int	random = rand() % 3;

	if (!random)
		return (new A);
	else if (random == 1)
		return (new B);
	else
		return (new C);
}

void	identify(Base* p)
{
	if		(dynamic_cast<A* >(p))
		std::cout << "A" << std::endl;
	else if	(dynamic_cast<B* >(p))
		std::cout << "B" << std::endl;
	else if	(dynamic_cast<C* >(p))
		std::cout << "C" << std::endl;

	return;
}

void	identify(Base& p)
{
	try
	{
		static_cast<void>(dynamic_cast<A& >(p));
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		static_cast<void>(dynamic_cast<B& >(p));
		std::cout << "B" << std::endl;
	}
	catch (std::bad_cast& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		static_cast<void>(dynamic_cast<C& >(p));
		std::cout << "C" << std::endl;
	}
	catch (std::bad_cast& e)
	{
		std::cout << e.what() << std::endl;
	}

	return;
}

int	main()
{
	srand(time(NULL));

	Base*	p = generate();
	Base&	p_ref = *p;

	identify(p);
	identify(p_ref);

	delete (p);

	return (0);
}
