/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 16:02:32 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/01/11 17:32:25 by aaydogdu         ###   ########.fr       */
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
		std::cout<<"File could not opened"<<std::endl;
		return (1);
	}
	std::stringstream buffer;	
	buffer<<infile.rdbuf();
	str = buffer.str();
	infile.close();
	
	return(myReplace(argv, str));
}