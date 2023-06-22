/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 22:52:51 by kfujita           #+#    #+#             */
/*   Updated: 2023/06/23 00:09:21 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

#define MSG_DEBUG "DEBUG"
#define MSG_INFO "INFO"
#define MSG_WARNING "WARNING"
#define MSG_ERROR "ERROR"

typedef enum MSG_LV {
	UNKNOWN,
	DEBUG,
	INFO,
	WARNING,
	ERROR,
} MSG_LV;

class Harl
{
private:
	void debug(void) const;
	void info(void) const;
	void warning(void) const;
	void error(void) const;
	MSG_LV filterLevel;

public:
	Harl(const std::string& filterLv);
	void complain(const std::string& level) const;
	void complain(MSG_LV& lv) const;
};

