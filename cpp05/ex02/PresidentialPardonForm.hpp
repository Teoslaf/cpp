#ifndef _PresidentialPardonForm_HPP_
#define _PresidentialPardonForm_HPP_

#include <iostream>
#include "AForm.hpp"
// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	PresidentialPardonForm : public AForm
{
	public	:
		PresidentialPardonForm ();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm (PresidentialPardonForm const &obj);
		~PresidentialPardonForm ();
		PresidentialPardonForm &operator= (const PresidentialPardonForm &obj);
		void execute(Bureaucrat const &executor) const;
		static std::string const &name;

	private	:
		std::string target;
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
