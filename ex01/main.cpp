/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 00:10:24 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/01/09 00:10:25 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int i, number = 12;

	Zombie* zmb = zombieHorde(number, "Zozoluski");

	for (i = 0; i < number; i++)
	{
		zmb[i].announce();
	}
	delete [] zmb;
}
