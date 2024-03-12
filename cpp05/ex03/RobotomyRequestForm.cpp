#include "RobotomyRequestForm.hpp"

std::string const &RobotomyRequestForm::name = "Robotomy Request Form";

RobotomyRequestForm::RobotomyRequestForm() : AForm(RobotomyRequestForm::name, 72, 45), target("target")
{
	// std::cout << "RobotomyRequestForm : Default Constructor Called" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(RobotomyRequestForm::name, 72, 45), target(target)
{
	// std::cout << "RobotomyRequestForm : target Constructor Called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	// std::cout << "RobotomyRequestForm : Destructor Called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj)
{
	// std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
	// std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->target = obj.target;
	}
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);
	std::cout << this->target << " has been robotomized successfully 50% of the time." << std::endl;
}
