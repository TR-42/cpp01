/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 22:14:10 by kfujita           #+#    #+#             */
/*   Updated: 2023/06/21 22:19:29 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, const Weapon &weapon) :
	weapon(weapon),
	name(name)
{
}

void HumanA::attack()
{
	std::cout
		<< this->name
		<< " attacks with thrir "
		<< this->weapon.getType()
		<< std::endl;
}
