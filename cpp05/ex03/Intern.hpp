#ifndef _Intern_HPP_
#define _Intern_HPP_

#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //
class AForm;
class ShrubberyCreationForm;
class RobotomyRequestForm;
class PresidentialPardonForm;

class	Intern 
{
	public	:
		Intern ();
		Intern (Intern const &obj);
		~Intern ();
		Intern &operator= (const Intern &obj);
		AForm *makeForm(const std::string &name_form, std::string target);
};

#endif