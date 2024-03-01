#include "PresidentialPardonForm.hpp"

std::string const &PresidentialPardonForm::name = "Presidental Pardon Form";

PresidentialPardonForm::PresidentialPardonForm() :AForm(PresidentialPardonForm::name, 25, 5),  target("default")
{
	std::cout << "PresidentialPardonForm : Default Constructor Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(PresidentialPardonForm::name, 25, 5), target(target)
{
	std::cout << "PresidentialPardonForm : target Constructor Called" << std::endl;

}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm : Destructor Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

PresidentialPardonForm	&PresidentialPardonForm::operator= (const PresidentialPardonForm &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{

	}
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor)
{
	std::cout << &executor <<  "execute from PresidentialPardon " << std::endl;
}