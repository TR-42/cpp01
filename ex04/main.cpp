/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 22:36:46 by kfujita           #+#    #+#             */
/*   Updated: 2023/06/21 23:17:52 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

int main(int argc, const char *argv[])
{
	if (argc != 4
		|| argv[1][0] == '\0'
		|| argv[2][0] == '\0'
		|| argv[3][0] == '\0'
	)
	{
		std::cerr << argv[0] << " filename s1 s2" << std::endl;
		return (1);
	}

	std::string fname_out = std::string(argv[1]) + ".replace";
	std::string in_str;
	try
	{
		std::ifstream in_stream(argv[1], std::ios::in);
		std::ostringstream sstr;
		sstr << in_stream.rdbuf();

		in_str = sstr.str();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}

	std::string s1(argv[2]);
	std::string s2(argv[3]);
	size_t last_pos = 0;
	try
	{
		std::ofstream out_stream(fname_out, std::ios::out | std::ios::trunc);

		while (true)
		{
			size_t pos = in_str.find(s1, last_pos);
			if (pos == std::string::npos)
			{
				out_stream << in_str.c_str() + last_pos;
				break ;
			}
			
			out_stream
				<< in_str.substr(last_pos, pos - last_pos)
				<< s2
			;
			last_pos = pos + s1.length();
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}

	return (0);
}
