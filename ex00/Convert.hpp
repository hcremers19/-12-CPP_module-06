/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:52:31 by hcremers          #+#    #+#             */
/*   Updated: 2022/09/27 17:45:17 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <cmath>

class Convert
{
	private:
		int		_isInt;
		int		_isChar;

		int		_intVal;
		char	_charVal;
		float	_floatVal;
		double	_doubleVal;

	public:
		Convert(std::string in);
		Convert(const Convert &cpy);
		~Convert();

		void	operator=(const Convert &op);

		int		getIsInt() const;
		int		getIsChar() const;

		int		getIntVal() const;
		char	getCharVal() const;
		float   getFloatVal() const;
		double  getDoubleVal() const;
};

#endif