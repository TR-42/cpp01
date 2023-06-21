/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 22:20:47 by kfujita           #+#    #+#             */
/*   Updated: 2023/06/21 22:31:29 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) :
	weapon(NULL),
	name(name)
{
}

HumanB::HumanB(const std::string &name, Weapon &weapon) :
	weapon(&weapon),
	name(name)
{
}

void HumanB::attack()
{
	if (this->weapon != NULL)
		std::cout
			<< this->name
			<< " attacks with thrir "
			<< this->weapon->getType()
			<< std::endl;
	else
		std::cout
			<< this->name
			<< " cannot attack"
			<< std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
