#ifndef _Form_HPP_
#define _Form_HPP_

#include <iostream>
#include "Bureaucrat.hpp"
// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //
// class Bureaucrat;
class Form
{
public:
	Form();
	Form(Form const &obj);
	Form(std::string name, int signGrade, int executeGrade );
	~Form();
	Form &operator=(const Form &obj);
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
	void beSigned(Bureaucrat &buearocrat);
private:
	const std::string name;
	bool isSigned;
	const int signGrade;
	const int executeGrade;
};
std::ostream &operator<<(std::ostream &output, Form &form);

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
