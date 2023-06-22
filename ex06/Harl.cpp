/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 22:55:58 by kfujita           #+#    #+#             */
/*   Updated: 2023/06/23 00:09:38 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Harl.hpp"

void Harl::debug(void) const
{
	switch (this->filterLevel) {
		case DEBUG:
			std::cout << MSG_DEBUG << "\t from " << this << std::endl;
			break;
		default:
			break;
	}
}

void Harl::info(void) const
{
	switch (this->filterLevel) {
		case DEBUG:
		case INFO:
			std::cout << MSG_INFO << "\t from " << this << std::endl;
			break;
		default:
			break;
	}
}

void Harl::warning(void) const
{
	switch (this->filterLevel) {
		case DEBUG:
		case INFO:
		case WARNING:
			std::cout << MSG_WARNING << "\t from " << this << std::endl;
			break;
		default:
			break;
	}
}

void Harl::error(void) const
{
	switch (this->filterLevel) {
		case DEBUG:
		case INFO:
		case WARNING:
		case ERROR:
			std::cout << MSG_ERROR << "\t from " << this << std::endl;
			break;
		default:
			break;
	}
}

static MSG_LV str_to_lv(const std::string& lv)
{
	if (lv.compare(MSG_DEBUG) == 0)
		return (DEBUG);
	else if (lv.compare(MSG_INFO) == 0)
		return (INFO);
	else if (lv.compare(MSG_WARNING) == 0)
		return (WARNING);
	else if (lv.compare(MSG_ERROR) == 0)
		return (ERROR);
	else
		return (UNKNOWN);
}

Harl::Harl(const std::string &filterLv)
{
	this->filterLevel = str_to_lv(filterLv);
	if (this->filterLevel == UNKNOWN)
		std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
}

// ref: https://isocpp.org/wiki/faq/pointers-to-members
void Harl::complain(const std::string& level) const
{
	MSG_LV lv = str_to_lv(level);

	this->complain(lv);
}

void Harl::complain(MSG_LV &lv) const
{
	switch (lv)
	{
	case DEBUG:
		this->debug();
		break;

	case INFO:
		this->info();
		break;

	case WARNING:
		this->warning();
		break;

	case ERROR:
		this->error();
		break;
	
	default:
		break;
	}
}
