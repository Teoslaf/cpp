#include "Intern.hpp"

Intern::Intern()
{
	// std::cout << "Intern : Default Constructor Called" << std::endl;
}

Intern::~Intern()
{
	// std::cout << "Intern : Destructor Called" << std::endl;
}

Intern::Intern(Intern const &obj)
{
	// std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Intern &Intern::operator=(const Intern &obj)
{
	// std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
	}
	return (*this);
}
AForm *makeShrubberyCreationForm(std::string target)
{
	return new ShrubberyCreationForm(target);
}
AForm *makeRobotomyRequestForm(std::string target)
{
	return new RobotomyRequestForm(target);
}
AForm *makePresidentialPardonForm(std::string target)
{
	return new PresidentialPardonForm(target);
}
AForm *Intern::makeForm(const std::string &name_form, std::string target)
{
	AForm *(*funcArray[3])(std::string target) = {&makeShrubberyCreationForm, &makeRobotomyRequestForm, &makePresidentialPardonForm};
	std::string lvlnames[] = {"ppf", "rrf", "scf"};
	for (int i = 0; i < 3; i++)
	{
		if (name_form == lvlnames[i])
		{
			std::cout << "Intern creates " << name_form << std::endl;
			return (funcArray[i](target));
		}
	}
	std::cout << "error" << std::endl;
	return NULL;
}
