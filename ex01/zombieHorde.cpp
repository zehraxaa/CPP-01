/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 00:10:40 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/01/09 00:10:41 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int i = 0;
	Zombie *zmb = new Zombie[N];
	
	while (i < N)
	{
		zmb[i].setName(name);
		i++;
	}
	return zmb;
}
