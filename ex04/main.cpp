/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 16:02:32 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/01/17 11:49:37 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

int myReplace(char **argv, std::string str)
{
	std::ofstream	outfile;
	int	pos;
	
	outfile.open((std::string(argv[1]) + ".replace").c_str());
	if (outfile.fail())
	{
		std::cout<<"Outfile could not opened."<<std::endl;
		return (1);
	}
	for (int i = 0; i < (int)str.size(); i++)
	{
		pos = str.find(argv[2], i);
		if (pos != -1 && pos == i)
		{
			outfile << argv[3];
			i += std::string(argv[2]).size() - 1;
		}
		else
			outfile << str[i];
	}
	outfile.close();
	return (0);
}

int main(int argc, char **argv)
{
	std::ifstream	infile;
	std::string		str;

	if (argc != 4)
	{
		std::cout<<"Wrong number of arguments."<<std::endl;
		return (1);
	}
	infile.open(argv[1]);
	
	if (infile.fail())
	{
		std::cout<<"Infile could not opened"<<std::endl;
		return (1);
	}
	std::stringstream buffer;	
	buffer<<infile.rdbuf();
	str = buffer.str();
	if (str.empty())
	{
		std::cout<<"Infile is empty"<<std::endl;
		return (1);
	}
	infile.close();
	
	return(myReplace(argv, str));
}