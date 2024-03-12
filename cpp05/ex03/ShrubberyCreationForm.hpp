#ifndef _ShrubberyCreationForm_HPP_
#define _ShrubberyCreationForm_HPP_

#include <iostream>
#include <fstream>
#include <sstream>
#include "AForm.hpp"
// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	ShrubberyCreationForm : public AForm
{
	public	:
		ShrubberyCreationForm ();
		ShrubberyCreationForm (std::string target);
		ShrubberyCreationForm (ShrubberyCreationForm const &obj);
		~ShrubberyCreationForm ();
		ShrubberyCreationForm &operator= (const ShrubberyCreationForm &obj);
		void execute(Bureaucrat const &executor) const;
		static std::string const &name;

	private	:
		std::string target;

	
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
