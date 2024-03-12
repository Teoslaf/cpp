#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{

	Bureaucrat max("max", 1);
	// Bureaucrat max("max", 130);
	// std::cout << max << std::endl;
	AForm *merkel = new PresidentialPardonForm("home");
	merkel->beSigned(max);
	// std::cout << *merkel << std::endl;
	merkel->execute(max);
	max.executeForm(*merkel);
	
	delete merkel;
	return (0);
}
