/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:59:17 by hcremers          #+#    #+#             */
/*   Updated: 2022/10/04 16:25:39 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <limits>

Convert::Convert(std::string str)
{
	double	valFloat = std::atof(str.c_str());
	int		valInt = static_cast<int>(valFloat);								// Allows to manage the scientific writing of numbers

	if (str.length() == 1 && isprint(str[0]) && !valInt && str[0] != '0')
	{
		_isInt = 1;
		_isChar = 1;
		_intVal = static_cast<int>(str[0]);
		_charVal = str[0];
		_floatVal = static_cast<float>(str[0]);
		_doubleVal = static_cast<double>(str[0]);
	}

	else
	{
		_isInt = 1;
		if (valInt == INT_MIN)
			_isInt = 0;
		_isChar = isprint(valInt);
		_intVal = valInt;
		_charVal = static_cast<int>(valInt);
		_floatVal = static_cast<float>(valFloat);
		_doubleVal = static_cast<double>(valFloat);
	}

	return;
}

Convert::Convert(const Convert& cpy) : _isInt(cpy.getIsInt()), _isChar(cpy.getIsChar()), _intVal(cpy.getIntVal()), _charVal(cpy.getCharVal()), _floatVal(cpy.getFloatVal()), _doubleVal(cpy.getDoubleVal())
{
	return;
}

Convert::~Convert()
{
	return;
}

void	Convert::operator=(const Convert& op)
{
	_isInt = op.getIsInt();
	_isChar = op.getIsChar();
	_intVal = op.getIntVal();
	_charVal = op.getCharVal();
	_floatVal = op.getFloatVal();
	_doubleVal = op.getDoubleVal();

	return;
}

int		Convert::getIsInt() const		{return (_isInt);}
int		Convert::getIsChar() const		{return (_isChar);}

int		Convert::getIntVal() const		{return (_intVal);}
char	Convert::getCharVal() const		{return (_charVal);}
float	Convert::getFloatVal() const	{return (_floatVal);}
double	Convert::getDoubleVal() const	{return (_doubleVal);}
