#ifndef _Brain_HPP_
#define _Brain_HPP_

#include <iostream>


class	Brain
{
	private	:
		std::string ideas[100];
	public	:
		Brain ();
		// Brain (Brain const &obj);
		~Brain ();
		// Brain &operator= (const Brain &obj);
		void setIdea(int index, std::string idea);
		std::string getIdea(int index);

};

#endif
