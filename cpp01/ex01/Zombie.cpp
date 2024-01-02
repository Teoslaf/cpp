#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
	// std::cout << name << " const with name" << std::endl;
}

Zombie::Zombie()
{
	// std::cout << name << " const without name" << std::endl;
}

Zombie::~Zombie(void)
{
	// std::cout << name << " deconstr" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << name << ":"
			  << " BraiiiiiiinnnzzzZ..." << std::endl;
}
