#ifndef _Cat_HPP_
# define _Cat_HPP_

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class Cat : public Animal
{
  private:
	Brain *brain;

  public:
	Cat();
	Cat(Cat const &obj);
	virtual ~Cat();
	Cat &operator=(const Cat &obj);
	void makeSound() const;
	void setCatIdea(int i, std::string idea);
	std::string getCatIdea(int i);
};

#endif
