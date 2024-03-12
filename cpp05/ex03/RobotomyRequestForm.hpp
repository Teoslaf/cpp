#ifndef _RobotomyRequestForm_HPP_
#define _RobotomyRequestForm_HPP_

#include <iostream>
#include "AForm.hpp"
// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class RobotomyRequestForm : public AForm
{
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const &obj);
	~RobotomyRequestForm();
	RobotomyRequestForm &operator=(const RobotomyRequestForm &obj);
	void execute(Bureaucrat const &executor) const;
	static std::string const &name;

private:
	std::string target;
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
