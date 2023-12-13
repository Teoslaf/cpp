/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaneski <ttaneski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:39:14 by ttaneski          #+#    #+#             */
/*   Updated: 2023/12/13 15:13:44 by ttaneski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact(std::string first_name = "", std::string last_name = "",
	std::string nickname = "", std::string darkest_secret = "",
	std::string phone_number = "")
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->darkest_secret = darkest_secret;
	this->phone_number = phone_number;
}

Contact::~Contact(void)
{
	std::cout << "Contact destroyed" << std::endl;
}
void Contact::createContact()
{
	std::cout << "Enter First Name" << std::endl;
	std::cin >> first_name;
	std::cout << "Enter Last Name" << std::endl;
	std::cin >> last_name;
	std::cout << "Enter Nickname" << std::endl;
	std::cin >> nickname;
	std::cout << "Enter Darkest Secret" << std::endl;
	std::cin >> darkest_secret;
	std::cout << "Enter Phone Number" << std::endl;
	std::cin >> phone_number;
}

void Contact::printContact()
{
	std::cout << first_name << std::endl;
	std::cout << last_name << std::endl;
	std::cout << nickname << std::endl;
	std::cout << darkest_secret << std::endl;
	std::cout << phone_number << std::endl;
}
/* PhoneBook::PhoneBook(void)
{
	std::cout << "Contact created" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Contact destroyed" << std::endl;
}
 */
int	main(int argc, char **argv)
{
	Contact	Contact;

	// PhoneBook	PhoneBook;
	std::string str;
	(void)argv;
	if (argc == 1)
	{
		while (1)
		{
			std::cout << "Enter input: ADD, SEARCH or EXIT" << std::endl;
			std::cin >> str;
			if (str == "ADD" || str == "add")
			{
				Contact.createContact();
				Contact.printContact();
				// std::cout << std::setw(10) << str << std::endl;
			}
			else if (str == "SEARCH" || str == "search")
				std::cout << str << std::endl;
			else if (str == "EXIT" || str == "exit")
			{
				std::cout << "c ya" << std::endl;
				break ;
			}
			else
				std::cout << "Type ADD, SEARCH or EXIT" << std::endl;
		}
	}
	else
		std::cout << "error" << std::endl;
}
