/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 10:45:52 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/28 12:08:19 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSES_HPP
# define CLASSES_HPP

#include <ctime>
#include <iostream>

class Base
{
	public:
		virtual	~Base() {};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif