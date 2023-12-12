/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaneski <ttaneski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:39:14 by ttaneski          #+#    #+#             */
/*   Updated: 2023/12/12 16:02:56 by ttaneski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string darkest_secret, int phone_number)
{
	// std::cout << "Contact created" << std::endl;
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->darkest_secret = darkest_secret;
	this->phone_number = phone_number;

}

Contact::~Contact(void)
{
	// std::cout << "Contact destroyed" << std::endl;
}

PhoneBook::PhoneBook(void)
{
	// std::cout << "Contact created" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	// std::cout << "Contact destroyed" << std::endl;
}
int	main(int argc, char **argv)
{
	Contact		first;
	PhoneBook	PhoneBook;

	std::string str;
	(void)argv;
	std::cout << "Enter input; ADD, SEARCH or EXIT" << std::endl;
	if (argc == 1)
	{
		std::cin >> str;
		if (str == "ADD")
			std::cout << str << std::endl;
		else if (str == "SEARCH")
			std::cout << str << std::endl;
		else if (str == "EXIT")
			std::cout << str << std::endl;
		else
			std::cout << "Type ADD, SEARCH or EXIT" << std::endl;
	}
	else
		std::cout << "error" << std::endl;
}
