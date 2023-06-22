/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 23:14:34 by kfujita           #+#    #+#             */
/*   Updated: 2023/06/22 23:18:28 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl h;
	Harl h2;

	h.complain(MSG_DEBUG);
	h.complain(MSG_INFO);
	h.complain(MSG_WARNING);
	h.complain(MSG_ERROR);
	h.complain("");

	h2.complain(MSG_DEBUG);
	h2.complain(MSG_INFO);
	h2.complain(MSG_WARNING);
	h2.complain(MSG_ERROR);
	h2.complain("");
}
