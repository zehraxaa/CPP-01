#include "Zombie.hpp"

Zombie:: Zombie(std::string nm)
{
    name = nm;
}

Zombie:: ~Zombie(void)
{
    //std::cout<<"Zombie "<<name<<" is destroyed."<<std::endl;
}
void Zombie:: announce()
{
    std::cout<<name<<" BraiiiiiiinnnzzzZ"<<std::endl;
}