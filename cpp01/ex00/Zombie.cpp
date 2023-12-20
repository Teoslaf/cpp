/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaneski <ttaneski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 11:05:23 by ttaneski          #+#    #+#             */
/*   Updated: 2023/12/20 11:12:11 by ttaneski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "ms keisha?" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "she fucking dead" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << "sup" << std::endl;
}
