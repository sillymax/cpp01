/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 22:02:23 by ychng             #+#    #+#             */
/*   Updated: 2024/05/17 22:08:17 by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string intro = "HI THIS IS BRAIN";
	std::string* stringPTR = &intro;
	std::string& stringREF = intro;
	
	std::cout << &intro << std::endl
			  << stringPTR << std::endl
			  << &stringREF << std::endl;

	std::cout << intro << std::endl
			  << *stringPTR << std::endl
			  << stringREF << std::endl;
}
