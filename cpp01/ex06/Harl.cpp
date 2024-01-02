#include "Harl.hpp"

void Harl::complain(std::string level)
{
	void (Harl::*ptrfunc[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string lvlnames[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int index = -1;
	for (int i = 0; i < 4; i++)
	{
		if (level == lvlnames[i])
		{
			index = i;
			break;
		}
	}
	switch (index)
	{
	case 0:
		(this->*ptrfunc[0])();
	case 1:
		(this->*ptrfunc[1])();
	case 2:
		(this->*ptrfunc[2])();
	case 3:
		(this->*ptrfunc[3])();
		break;
	default:
		std::cout << "problem" << std::endl;
		break;
	}
}

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do! \n" << std::endl;
}
void Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}
void Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}
void Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
Harl::Harl()
{
}

Harl::~Harl()
{
}
