#include "AForm.hpp"

AForm::AForm(): name("default"), isSigned(false), signGrade(1), executeGrade(1)
{
	// std::cout << "AForm : Default Constructor Called" << std::endl;
}
AForm::AForm(std::string name,int signGrade, int executeGrade ): name(name), isSigned(false), signGrade(signGrade), executeGrade(executeGrade)
{
	try
	{
		if (signGrade > 150)
			throw AForm::GradeTooLowException();
		else if (signGrade < 1)
			throw AForm::GradeTooHighException();
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	// std::cout << "AForm : Default Constructor Called" << std::endl;
}
AForm::~AForm()
{
	// std::cout << "AForm : Destructor Called" << std::endl;
}

AForm::AForm(AForm const &obj): name(obj.getName() + "_copy"), isSigned(obj.isSigned), signGrade(obj.signGrade), executeGrade(obj.executeGrade) 
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

AForm	&AForm::operator= (const AForm &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->isSigned = obj.isSigned;
	}
	return (*this);
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return "AForm: Grade is too high";
}
const char *AForm::GradeTooLowException::what() const throw()
{
	return "AForm: Grade is too low";
}

std::string AForm::getName() const
{
	return name;
}

int AForm::getsignGrade() const
{
	return signGrade;
}
int AForm::getexecuteGrade() const
{
	return executeGrade;
}

bool AForm::getIsSigned()
{
	return isSigned;
}
std::ostream &operator<<(std::ostream &output, AForm &AForm)
{
	return (output << AForm.getName() << " AForm grade: " << AForm.getsignGrade() << " isSigned: "  << AForm.getIsSigned() <<" executeGrade: "  << AForm.getexecuteGrade());
}
void AForm::beSigned(Bureaucrat &buearocrat)
{
	try
	{
		if(buearocrat.getGrade() <= signGrade)
			isSigned = true;
		else
			throw AForm::GradeTooLowException();
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
