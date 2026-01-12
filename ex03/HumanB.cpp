/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 15:19:06 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/01/11 13:05:07 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	weapon = NULL;
	std::cout<<"HumanB "<<name<<" created with no weapon"<<std::endl;
}

HumanB::~HumanB()
{
	std::cout<<"HumanB "<<name<<" destroyed"<<std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void	HumanB::attack()
{
	std::cout<<"HumanB "<<name<<" attacks with his "<<weapon->getType()<<std::endl;
}
