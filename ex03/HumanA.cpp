/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 14:28:57 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/01/11 13:06:24 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon), name(name)
{
	std::cout<<"HumanA created with "<<weapon.getType()<<std::endl;
}

HumanA::~HumanA()
{
	std::cout<<"HumanA "<<name<<" destroyed"<<std::endl;
}

std::string HumanA::getName()
{
	return name;
}

void HumanA::setName(std::string name)
{
	this->name = name;
}

void HumanA::attack()
{
	std::cout<<name<<" attacks with their "<<weapon.getType()<<std::endl;
}
