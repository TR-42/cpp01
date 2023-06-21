/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 21:29:33 by kfujita           #+#    #+#             */
/*   Updated: 2023/06/21 22:03:51 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	// Initialize
	std::string str("HI THIS IS BRAIN");
	std::string* stringPTR = &str;
	std::string& stringREF = str;

#pragma region Print Address
	// print memory address of the string variable
	std::cout << "str addr: " << &str << std::endl;

	// print memory address held by stringPTR
	std::cout << "addr held by strPTR: " << stringPTR << std::endl;

	// print memory address held by stringREF
	std::cout << "addr held by strREF: " << &stringREF << std::endl;
#pragma endregion Print Address

#pragma region Print Value
	// print value of the string variable
	std::cout << "str value: " << str << std::endl;

	// print value pointed to by stringPTR
	std::cout << "value pt_to by strPTR: " << *stringPTR << std::endl;

	// print value pointed to by stringRED
	std::cout << "value pt_to by strREF: " << stringREF << std::endl;
#pragma endregion Print Value

	return (0);
}
