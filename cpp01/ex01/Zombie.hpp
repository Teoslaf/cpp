#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iomanip>
#include <iostream>
#include <cstdlib>

class Zombie
{
private:
	std::string name;

public:
	void announce(void);
	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);
};
Zombie *zombieHorde(int N, std::string name);
void deletezobie(Zombie *horde);
#endif
