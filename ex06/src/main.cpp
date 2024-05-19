/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 21:39:11 by ychng             #+#    #+#             */
/*   Updated: 2024/05/19 22:18:12by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

// Compiler will assign value to these members starting from 0
// Enum is used to group realted const together
enum Level
{
	Debug = 0,
	Info,
	Warning,
	Error
};

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Look Carefully!" << std::endl
				  << "FORMAT: ./harlFilter level" << std::endl;
		return 0;
	}
	std::string levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	short level_index = -1;
	for (short i = 0; i < 4; i++)
		if (levels[i] == argv[1])
			level_index = i;


	Harl harl;
	switch(level_index)
	{
		case Debug:
			harl.complain("debug");
		case Info:
			harl.complain("info");
		case Warning:
			harl.complain("warning");
		case Error:
			harl.complain("error");
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}

	return 0;
}
