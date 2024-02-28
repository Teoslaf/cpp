#include "Form.hpp"

Form::Form(): name("default"), isSigned(false), signGrade(1), executeGrade(1)
{
	// std::cout << "Form : Default Constructor Called" << std::endl;
}
Form::Form(std::string name,int signGrade, int executeGrade ): name(name), isSigned(false), signGrade(signGrade), executeGrade(executeGrade)
{
	try
	{
		if (signGrade > 150)
			throw Form::GradeTooLowException();
		else if (signGrade < 1)
			throw Form::GradeTooHighException();
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	// std::cout << "Form : Default Constructor Called" << std::endl;
}
Form::~Form()
{
	// std::cout << "Form : Destructor Called" << std::endl;
}

Form::Form(Form const &obj): name(obj.getName() + "_copy"), isSigned(obj.isSigned), signGrade(obj.signGrade), executeGrade(obj.executeGrade) 
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Form	&Form::operator= (const Form &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->isSigned = obj.isSigned;
	}
	return (*this);
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Form: Grade is too high";
}
const char *Form::GradeTooLowException::what() const throw()
{
	return "Form: Grade is too low";
}

std::string Form::getName() const
{
	return name;
}

int Form::getsignGrade() const
{
	return signGrade;
}
int Form::getexecuteGrade() const
{
	return executeGrade;
}

bool Form::getIsSigned()
{
	return isSigned;
}
std::ostream &operator<<(std::ostream &output, Form &form)
{
	return (output << form.getName() << " form grade: " << form.getsignGrade() << " isSigned: "  << form.getIsSigned() <<" executeGrade: "  << form.getexecuteGrade());
}
void Form::beSigned(Bureaucrat &buearocrat)
{
	try
	{
		if(buearocrat.getGrade() <= signGrade)
			isSigned = true;
		else
			throw Form::GradeTooLowException();
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
