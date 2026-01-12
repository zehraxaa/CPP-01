/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 00:26:37 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/01/10 00:48:43 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string variable = "HI THIS IS BRAIN";
	std::string *stringPTR;
	std::string &stringREF = variable;
	
	stringPTR = &variable;

	std::cout<<"The memory address of the string variable: "<<&variable<<std::endl;
	std::cout<<"The memory address held by stringPTR: "<<stringPTR<<std::endl;
	std::cout<<"The memory address held by stringREF: "<<&stringREF<<std::endl;
	std::cout<<"----------------------------------------------------"<<std::endl;
	std::cout<<"The value of the string variable: "<<variable<<std::endl;
	std::cout<<"The value pointed to by stringPTR: "<<*stringPTR<<std::endl;
	std::cout<<"The value pointed to by stringREF: "<<stringREF<<std::endl;

	return (0);
}