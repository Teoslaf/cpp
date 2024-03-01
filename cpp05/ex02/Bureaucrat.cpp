#include "Bureaucrat.hpp"
#include "AForm.hpp"

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
		std::exit(EXIT_FAILURE);
	}

	// std::cout << "Bureaucrat : name grade Constructor Called" << std::endl;
}
Bureaucrat::~Bureaucrat()
{
	// std::cout << "Bureaucrat : Destructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &obj) : name(obj.getName() + "_copy")
{
	// std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
	// std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->grade = obj.grade;
	}
	return (*this);
}

std::string Bureaucrat::getName() const
{
	return name;
}

int Bureaucrat::getGrade()
{
	return grade;
}

void Bureaucrat::incrementGrade()
{
	try
	{
		if (grade <= 1)
			throw GradeTooHighException();
		grade--;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << '\n';
		std::exit(EXIT_FAILURE);
	}
}
void Bureaucrat::decrementGrade()
{
	try
	{
		if (grade >= 150)
			throw GradeTooLowException();
		grade++;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << '\n';
		std::exit(EXIT_FAILURE);
	}
}
std::ostream &operator<<(std::ostream &output, Bureaucrat &bureaucrat)
{
	return (output << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade());
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Bureaucrat: Grade is too high";
}
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Bureaucrat: Grade is too low";
}

void Bureaucrat::signAForm(AForm &AForm)
{
	try
	{
		if (AForm.getIsSigned())
			std::cout << name << " signed " << AForm.getName() << std::endl;
		else
			throw GradeTooLowException();
	}
	catch (std::exception &e)
	{
		std::cerr << name << " couldn’t sign " << AForm.getName() << " because " << e.what() << std::endl;
	}
}
