/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 00:24:01 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/01/08 23:45:20 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie:: Zombie(std::string name)
{
    this->name = name;
}

Zombie:: ~Zombie(void)
{
    std::cout<<"Zombie "<<name<<" is destroyed."<<std::endl;
}
void Zombie:: announce()
{
    std::cout<<name<<" BraiiiiiiinnnzzzZ..."<<std::endl;
}