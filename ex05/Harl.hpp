/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 22:52:51 by kfujita           #+#    #+#             */
/*   Updated: 2023/06/22 23:08:28 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

#define MSG_DEBUG "DEBUG"
#define MSG_INFO "INFO"
#define MSG_WARNING "WARNING"
#define MSG_ERROR "ERROR"

class Harl
{
private:
	void debug(void) const;
	void info(void) const;
	void warning(void) const;
	void error(void) const;

public:
	void complain(std::string level) const;
};
