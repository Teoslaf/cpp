#ifndef _Bureaucrat_HPP_
#define _Bureaucrat_HPP_

#include <iostream>
// #include "AForm.hpp"
class AForm;
class Bureaucrat
{
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &obj);
	~Bureaucrat();
	Bureaucrat &operator=(const Bureaucrat &obj);
	std::string getName() const;
	int getGrade();
	void incrementGrade();
	void decrementGrade();
	void signAForm(AForm &AForm);

	class GradeTooHighException : public std::exception
	{
		public: const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public: const char* what() const throw();
	};

private:
	const std::string name;
	int grade;
};

std::ostream &operator<<(std::ostream &output, Bureaucrat &bureaucrat);

#endif
