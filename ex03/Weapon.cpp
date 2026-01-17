/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 00:54:46 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/01/10 01:01:51 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::weapon() {}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::~Weapon() { }

std::string Weapon::getType()
{
	return type;
}

void Weapon::setType(std::string newType)
{
	type = newType;
}
