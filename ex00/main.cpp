/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 19:51:31 by kfujita           #+#    #+#             */
/*   Updated: 2023/06/21 20:02:35 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Zombie.hpp"

#define C_STACK "s"
#define C_HEAP "h"

int main(int argc, const char *argv[])
{
	if (argc != 3
		|| !(strcmp(C_STACK, argv[1]) || strcmp(C_HEAP, argv[1])))
	{
		std::cerr << argv[0] << " " C_STACK "|" C_HEAP " {NAME}" << std::endl;
		return (1);
	}

	std::string name(argv[2]);
	if (argv[1][0] == *C_STACK)
	{
		std::cerr << "(STACK)" << std::endl;

		randomChump(name);
	}
	else
	{
		std::cerr << "(HEAP)" << std::endl;

		Zombie *zombie = newZombie(name);
		zombie->announce();
		delete zombie;
	}

	return (0);
}
