#include "Zombie.hpp"

Zombie *newZombie(std::string name);
void    randomChump(std::string name);

int main()
{
    Zombie *player = newZombie("Frankenstein");
    player->announce();
    randomChump("Moritz");
    delete player; //bunu koymayınca valgrind 3 alloc 2 free diyor. koyunca 3'ü de freeleniyor.
}