#ifndef _Brain_HPP_
#define _Brain_HPP_

#include <iostream>

class Brain
{
public:
	Brain();
	Brain(Brain const &obj);
	~Brain();
	Brain &operator=(const Brain &obj);
	void setIdea(int i, std::string idea);
	std::string getIdea(int i);

protected:
	std::string ideas[100];
};

#endif