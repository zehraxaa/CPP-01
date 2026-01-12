/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 14:08:07 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/01/10 15:06:51 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
	private:
		Weapon &weapon;
		std::string name;
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		std::string getName();
		void setName(std::string name);
		void attack();
		//void setWeapon(std::string); ben buna gerek olduğunu düşünmüyorum abi. mainde zaten setType'ı weapon objesi üzerinden çağırmış. buna ne gerek var yani
};

#endif