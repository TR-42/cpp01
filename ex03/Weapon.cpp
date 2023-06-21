/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 22:11:21 by kfujita           #+#    #+#             */
/*   Updated: 2023/06/21 22:17:18 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type) :
	type(type)
{
}

std::string Weapon::getType() const
{
	return this->type;
}

void Weapon::setType(const std::string &newType)
{
	this->type = newType;
}
