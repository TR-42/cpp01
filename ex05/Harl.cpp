/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 22:55:58 by kfujita           #+#    #+#             */
/*   Updated: 2023/06/22 23:18:53 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Harl.hpp"

void Harl::debug(void) const
{
	std::cout << MSG_DEBUG << "\t from " << this << std::endl;
}

void Harl::info(void) const
{
	std::cout << MSG_INFO << "\t from " << this << std::endl;
}

void Harl::warning(void) const
{
	std::cout << MSG_WARNING << "\t from " << this << std::endl;
}

void Harl::error(void) const
{
	std::cout << MSG_ERROR << "\t from " << this << std::endl;
}

typedef void (Harl::*t_func)(void) const;

struct str_func
{
	std::string str;
	t_func func;
};

// ref: https://isocpp.org/wiki/faq/pointers-to-members
void Harl::complain(std::string level) const
{
	static const str_func funcs[] = {
		{ MSG_DEBUG, &Harl::debug },
		{ MSG_INFO, &Harl::info },
		{ MSG_WARNING, &Harl::warning },
		{ MSG_ERROR, &Harl::error },
	};

	for (size_t i = 0; i < (sizeof(funcs) / sizeof(str_func)); i++)
	{
		if (level.compare(funcs[i].str) == 0)
		{
			(this->*(funcs[i].func))();
			return;
		}
	}
}
