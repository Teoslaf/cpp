#include "Bureaucrat.hpp"

int main()
{
	std::cout << "valid incrementGrade"<< std::endl;

	Bureaucrat Bureaucrat1("max", 3);
	Bureaucrat Bureaucrat2 = Bureaucrat1;
	std::cout << Bureaucrat1 << std::endl;
	Bureaucrat1.incrementGrade();
	std::cout << Bureaucrat1 << std::endl;
	std::cout << "----------" << std::endl;
	std::cout << Bureaucrat2 << std::endl;
	Bureaucrat2.incrementGrade();
	std::cout << Bureaucrat2 << std::endl;

	std::cout << "----------" << std::endl;
	std::cout << "valid decrementGrade"<< std::endl;
	Bureaucrat b("max2", 3);
	std::cout << b << std::endl;
	b.decrementGrade();
	std::cout << b << std::endl;

	std::cout << "----------" << std::endl;
	Bureaucrat c("max2", 0);
	Bureaucrat d("max3", 1213);
	Bureaucrat e("max3", -1213);
	Bureaucrat f("max3", 1);
	f.incrementGrade();
	Bureaucrat g("max3", 150);
	g.decrementGrade();

	return (0);
}
