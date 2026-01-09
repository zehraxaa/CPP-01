/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 00:24:51 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/01/08 00:29:57 by aaydogdu         ###   ########.fr       */
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
        Zombie (std::string nm);
        ~Zombie();
        void    announce (void);
};

#endif