/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 19:51:31 by kfujita           #+#    #+#             */
/*   Updated: 2023/06/21 21:26:32 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>
#include <cctype>

#include "Zombie.hpp"

static bool _isNumericStr(const char *str)
{
	while (*str != '\0')
	{
		if (!std::isdigit(*str))
			return (false);
		str++;
	}
	return (true);
}

int main(int argc, const char *argv[])
{
	if (argc != 3 || !_isNumericStr(argv[1]))
	{
		std::cerr << argv[0] << " N {NAME}" << std::endl;
		return (1);
	}
	int N = std::atoi(argv[1]);
	std::string name(argv[2]);

	Zombie* zombies = zombieHorde(N, name);

	if (zombies == NULL)
	{
		std::cerr << "zombieHorde Error" << std::endl;
		return (1);
	}

	for (int i = 0; i < N; i++)
	{
		std::cout << '[' << i << "] ";
		zombies[i].announce();
	}
	
	delete[] zombies;
	return (0);
}
