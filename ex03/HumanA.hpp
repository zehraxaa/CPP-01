/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 14:08:07 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/01/17 11:29:55 by aaydogdu         ###   ########.fr       */
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
		std::string& getName() const;
		void setName(std::string name);
		void attack();
};

#endif