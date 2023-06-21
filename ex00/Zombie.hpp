/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 19:41:59 by kfujita           #+#    #+#             */
/*   Updated: 2023/06/21 19:48:29 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Zombie
{
private:
	const std::string name;

public:
	Zombie(const std::string &name);
	~Zombie();

	void announce(void);
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);
