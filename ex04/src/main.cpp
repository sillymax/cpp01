/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychng <ychng@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 01:00:35 by ychng             #+#    #+#             */
/*   Updated: 2024/05/19 04:47:33by ychng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void replaceLine(std::string& line, const std::string searchFor, const std::string replaceWith)
{
	size_t pos = line.find(searchFor);
	while (pos != std::string::npos)
	{
		line.erase(pos, searchFor.length());
		line.insert(pos, replaceWith);
		pos = line.find(searchFor, pos + replaceWith.length());
	}	
}


int main(int argc, char **argv)
{
	if (argc != 4)	
	{
		std::cout << "FORMAT: ./sed_is_for_losers fileName searchFor replaceWith" << std::endl;
		return 0;
	}

	// input file
	std::string searchFor = argv[2];
	std::string replaceWith = argv[3];
	
	std::ifstream infile;
	infile.open(argv[1]);
	if (infile.is_open())
	{
		std::string line;
		std::string result;
		while (getline(infile, line))
		{
			replaceLine(line, searchFor, replaceWith);
			result += line + '\n';
			// if (!result.empty() && (result[result.length() - 1] != '\n'))
			// 	result += '\n';
		}
		infile.close();


		// output file
		std::string outputFileName = std::string(argv[1]) + ".replace";
		std::ofstream outfile(outputFileName.c_str());
		if (outfile.is_open())
		{
			outfile << result;
			outfile.close();
		}
	}
	else
		std::cout << "File doesn't exist!" << std::endl;
}