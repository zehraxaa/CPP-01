/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 00:10:33 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/01/09 00:10:34 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout<<"Nameless zombie created"<<std::endl;
}

Zombie::~Zombie()
{
	std::cout<<"Zombie destroyed"<<std::endl;
}

void	Zombie::announce(void)
{
	std::cout<<name<<" BraiiiiiiinnnzzzZ..."<<std::endl;
}

void	Zombie::setName(std::string nm)
{
	this->name = nm;
}
