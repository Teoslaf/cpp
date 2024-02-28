#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{

	Bureaucrat bureaucrat("max", 3);
	Form form("Tax Form", 2, 1);
	std::cout << "Before signing: " << form << std::endl;
	form.beSigned(bureaucrat);
	bureaucrat.signForm(form);
	std::cout << "After signing: " << form << std::endl;

	return (0);
}
