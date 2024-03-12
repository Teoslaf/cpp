#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{


	Bureaucrat max("max", 1);
	// Bureaucrat max("max", 130);
	// std::cout << max << std::endl;
	// std::cout << *merkel << std::endl;
	Intern someRandomIntern;

	AForm *rrf;
	rrf = someRandomIntern.makeForm("rrf", "sad");
	rrf->beSigned(max);
	rrf->execute(max);
	delete rrf;

	return (0);
}
