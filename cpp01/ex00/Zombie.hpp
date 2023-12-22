/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaneski <ttaneski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 11:05:20 by ttaneski          #+#    #+#             */
/*   Updated: 2023/12/20 11:49:07 by ttaneski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iomanip>
# include <iostream>
# include <cstdlib>

class Zombie
{
  private:
	std::string name;

  public:
	void announce( void );
	Zombie(std::string name);
	~Zombie(void);
};
Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
