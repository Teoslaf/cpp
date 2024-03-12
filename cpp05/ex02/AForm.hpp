#ifndef _AForm_HPP_
#define _AForm_HPP_

#include <iostream>
#include "Bureaucrat.hpp"
// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //
// class Bureaucrat;
class AForm
{
public:
	AForm();
	AForm(AForm const &obj);
	AForm(std::string name, int signGrade, int executeGrade );
	~AForm();
	AForm &operator=(const AForm &obj);
	std::string getName() const;
	int getsignGrade() const;
	int getexecuteGrade() const;
	bool getIsSigned();
	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw();
	};
		class AlreadySigned : public std::exception
	{
	public:
		const char *what() const throw();
	};
	void beSigned(Bureaucrat &buearocrat);
	virtual void execute(Bureaucrat const &bureaucrat) const = 0;

private:
	const std::string name;
	bool isSigned;
	const int signGrade;
	const int executeGrade;
};
std::ostream &operator<<(std::ostream &output, AForm &AForm);

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
