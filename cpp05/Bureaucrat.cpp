#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(0)
{
	// std::cout << "Bureaucrat : Default Constructor Called" << std::endl;
}
Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	try
	{
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		this->grade = grade;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;

	}

	// std::cout << "Bureaucrat : name grade Constructor Called" << std::endl;
}
Bureaucrat::~Bureaucrat()
{
	// std::cout << "Bureaucrat : Destructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		//	this->attributes = obj.attributes;
		//	...
	}
	return (*this);
}

std::string Bureaucrat::getName()
{
	return name;
}

int Bureaucrat::getGrade()
{
	return grade;
}

void Bureaucrat::incrementGrade()
{

}
void Bureaucrat::decrementGrade()
{
	
}
std::ostream &operator<<(std::ostream &output, Bureaucrat &bureaucrat)
{
	return (output << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade()) << std::endl;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}
