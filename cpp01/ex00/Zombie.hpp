/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaneski <ttaneski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 11:05:20 by ttaneski          #+#    #+#             */
/*   Updated: 2023/12/20 11:10:46 by ttaneski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iomanip>
# include <iostream>
# include <cstdlib>

# define W "\033[1;37m"
# define R "\033[1;31m"
# define Y "\033[1;33m"
# define G "\033[1;32m"
# define M "\033[1;35m"
# define B "\033[1;36m"

class Zombie
{
  private:
	std::string name;

  public:
	void announce( void );
	Zombie(void);
	~Zombie(void);
};
#endif
