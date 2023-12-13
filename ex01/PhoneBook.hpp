/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaneski <ttaneski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:39:17 by ttaneski          #+#    #+#             */
/*   Updated: 2023/12/13 13:22:27 by ttaneski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>

class Contact
{
  public:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string darkest_secret;
	std::string phone_number;
	Contact(std::string first_name, std::string last_name, std::string nickname,
		std::string darkest_secret, std::string phone_number);
	~Contact(void);
};

class PhoneBook
{
  public:
	int contactCount;
	Contact Contact[8];
	PhoneBook(void);
	~PhoneBook(void);
};

#endif