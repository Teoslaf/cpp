/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaneski <ttaneski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:39:14 by ttaneski          #+#    #+#             */
/*   Updated: 2023/12/15 16:09:37 by ttaneski         ###   ########.fr       */
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
bool Contact::isEmpty()
{
	return (first_name.empty() && last_name.empty() && nickname.empty()
		&& darkest_secret.empty() && phone_number.empty());
}
Contact::~Contact(void)
{
	// std::cout << "Contact destroyed" << W << std::endl;
}
void Contact::createContact()
{
	std::cout << B << "Enter First Name" << W << std::endl;
	std::cin.ignore();
	std::getline(std::cin, first_name);
	std::cout << B << "Enter Last Name" << W << std::endl;
	std::getline(std::cin, last_name);
	std::cout << B << "Enter Nickname" << W << std::endl;
	std::getline(std::cin, nickname);
	std::cout << B << "Enter Darkest Secret" << W << std::endl;
	std::getline(std::cin, darkest_secret);
	std::cout << B << "Enter Phone Number" << W << std::endl;
	std::getline(std::cin, phone_number);
}

std::string Contact::trunc(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}
void Contact::printContact(int index)
{
	std::cout << M << std::setw(10) << index << W << "|" << std::endl;
	std::cout << M << std::setw(10) << trunc(first_name) << W << "|" << std::endl;
	std::cout << M << std::setw(10) << trunc(last_name) << W << "|" << std::endl;
	std::cout << M << std::setw(10) << trunc(nickname) << W << "|" << std::endl;
}
PhoneBook::PhoneBook(void)
{
	// std::cout << "Contact created" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	// std::cout << "Contact destroyed" << std::endl;
}

/* void PhoneBook::printSearch(int index)
{
	for(int i = 0; i < index; i++)
	{

	}
}
 */
int	main(int argc, char **argv)
{
	PhoneBook	PhoneBook;
	int			i;
	std::string str;
	i = 0;
	(void)argv;
	if (argc == 1)
	{
		while (1)
		{
			if (std::cin.eof())
				break ;
			std::cout << G << "Enter input: ADD, SEARCH or EXIT " << W << std::endl;
			std::cin >> str;
			if (str == "ADD" || str == "add")
			{
				i = i % 8;
				PhoneBook.Contacts[i].createContact();
				i++;
			}
			else if (str == "SEARCH" || str == "search")
			{
				int j;
				std::cout << G << "Enter index (0 - 7): " << W << std::endl;
				std::cin >> j;
				if (j >= 0 && j <= 7)
				{
					if (PhoneBook.Contacts[j].isEmpty())
						std::cout << R << "Contact at index " << j << " is empty." << W << std::endl;
					else
						PhoneBook.Contacts[j].printContact(j);
				}
				else
					std::cout << R << "Invalid index. Please enter a value between 0 and 7." << W << std::endl;
			}
			else if (str == "EXIT" || str == "exit" || std::cin.eof())
			{
				std::cout << Y << "c ya" << W << std::endl;
				break ;
			}
			else
				std::cout << R << "Try again!" << W << std::endl;
		}
	}
	else
		std::cout << "error" << std::endl;
	return (0);
}
