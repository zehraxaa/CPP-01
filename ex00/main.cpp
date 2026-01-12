/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 00:23:34 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/01/10 00:49:13 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name);
void    randomChump(std::string name);

int main()
{
    Zombie *player = newZombie("Frankenstein");
    player->announce();
    randomChump("Moritz");
    delete player;

    return (0);
}