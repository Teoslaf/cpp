#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{

	Bureaucrat max("max", 1);
	std::cout << max << std::endl;
	AForm *merkel = new PresidentialPardonForm("home");
	merkel->beSigned(max);
	std::cout << *merkel << std::endl;
	merkel->execute(max);

	// AForm AForm("Tax AForm", 2, 1);
	// std::cout << "Before signing: " << AForm << std::endl;
	// AForm.beSigned(bureaucrat);
	// bureaucrat.signAForm(AForm);
	// std::cout << "After signing: " << AForm << std::endl;
	
	delete merkel;
	return (0);
}
