#ifndef _Dog_HPP_
# define _Dog_HPP_

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class Dog : public Animal
{
  private:
	Brain *brain;

  public:
	Dog();
	Dog(Dog const &obj);
	virtual ~Dog();
	Dog &operator=(const Dog &obj);
	void makeSound() const;
	void setDogIdea(int i, std::string idea);
	std::string getDogIdea(int i);
};

#endif
