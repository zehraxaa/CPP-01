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