/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 00:30:08 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/01/08 00:34:26 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>

class Zombie
{
	private:
		std::string name;

	public:
		Zombie();
		~Zombie();
		void	announce(void);
		void	setName(std::string nm);
};

	Zombie* zombieHorde( int N, std::string name );

#endif