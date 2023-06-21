/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 19:41:59 by kfujita           #+#    #+#             */
/*   Updated: 2023/06/21 21:27:18 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Zombie
{
private:
	std::string name;

public:
	Zombie();
	Zombie(const std::string &name);
	~Zombie();

	void announce(void);

	void setName(const std::string &name);
};

Zombie* zombieHorde(int N, std::string name);
