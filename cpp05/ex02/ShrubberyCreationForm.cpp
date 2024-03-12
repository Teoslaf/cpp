#include "ShrubberyCreationForm.hpp"

std::string const &ShrubberyCreationForm::name = "Shrubbery Creation Form";

ShrubberyCreationForm::ShrubberyCreationForm() : AForm(ShrubberyCreationForm::name, 145, 137),  target("defalut")
{
	std::cout << "ShrubberyCreationForm : Default Constructor Called" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm (std::string target) :AForm(ShrubberyCreationForm::name, 145, 137),  target(target)
{
	std::cout << "ShrubberyCreationForm : target Constructor Called" << std::endl;

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm : Destructor Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator= (const ShrubberyCreationForm &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		//	this->attributes = obj.attributes;
		//	...
	}
	return (*this);
}


void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);
	// std::cout << &executor << "ShrubberyCreationForm"<< std::endl;
	std::string filename;
	std::ifstream file(filename.c_str());
	filename = this->target;
	
}
