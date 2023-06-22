/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 23:14:34 by kfujita           #+#    #+#             */
/*   Updated: 2023/06/22 23:48:29 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Harl.hpp"

int main(int argc, const char *argv[])
{
	if (argc != 2)
	{
		std::cerr << argv[0] << " FILTER_LV" << std::endl;
		return (1);
	}
	Harl h(argv[1]);

	h.complain(MSG_DEBUG);
	h.complain(MSG_INFO);
	h.complain(MSG_WARNING);
	h.complain(MSG_ERROR);
	h.complain("");
}
