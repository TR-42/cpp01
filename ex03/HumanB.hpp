/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 22:12:23 by kfujita           #+#    #+#             */
/*   Updated: 2023/06/21 22:30:46 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanB
{
private:
	Weapon* weapon;
	const std::string name;

public:
	HumanB(const std::string &name);
	HumanB(const std::string &name, Weapon &weapon);

	void attack();

	void setWeapon(Weapon& weapon);
};
