/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaneski <ttaneski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:39:14 by ttaneski          #+#    #+#             */
/*   Updated: 2023/12/18 15:35:17 by ttaneski         ###   ########.fr       */
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
}

void Contact::err()
{
	std::cout << R << "write smt bruv" << W << std::endl;
	return ;
}
void Contact::createContact()
{
		std::cin.ignore();
	do
	{
		if(std::cin.eof())
			exit(EXIT_FAILURE) ;
		std::cout << B << "Enter First Name" << W << std::endl;
		std::getline(std::cin, first_name);
		if (first_name.empty())
			err();
	} while (first_name.empty());
	do
	{
		if(std::cin.eof())
			exit(EXIT_FAILURE) ;
		std::cout << B << "Enter Last Name" << W << std::endl;
		std::getline(std::cin, last_name);
		if (last_name.empty())
			err();
	} while (last_name.empty());
	do
	{
		if(std::cin.eof())
			exit(EXIT_FAILURE) ;
		std::cout << B << "Enter Nickname" << W << std::endl;
		std::getline(std::cin, nickname);
		if (nickname.empty())
			err();
	} while (nickname.empty());
	do
	{
		if(std::cin.eof())
			exit(EXIT_FAILURE) ;
		std::cout << B << "Enter Darkest Secret" << W << std::endl;
		std::getline(std::cin, darkest_secret);
		if (darkest_secret.empty())
			err();
	} while (darkest_secret.empty());
	do
	{
		if(std::cin.eof())
			exit(EXIT_FAILURE) ;
		std::cout << B << "Enter Phone Number" << W << std::endl;
		std::getline(std::cin, phone_number);
		if (phone_number.empty())
			err();
	} while (phone_number.empty());
}

void PhoneBook::addContact()
{
	if (numberOfContacts < 8)
	{
		Contacts[numberOfContacts].createContact();
		numberOfContacts++;
	}
	else
	{
		Contacts[oldest].createContact();
		oldest = (oldest + 1) % 8;
	}
}
std::string Contact::trunc(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}
void Contact::printContact(int index)
{
	std::cout << M << std::setw(10) << index << W << "|";
	std::cout << M << std::setw(10) << trunc(first_name) << W << "|";
	std::cout << M << std::setw(10) << trunc(last_name) << W << "|";
	std::cout << M << std::setw(10) << trunc(nickname) << W << "|" << std::endl;
}
void PhoneBook::PprintContact(int index)
{
	Contacts[index].printContact(index);
}

PhoneBook::PhoneBook(void) : oldest(0), numberOfContacts(0)
{
}

PhoneBook::~PhoneBook(void)
{
}

void PhoneBook::printSearch()
{
	std::cout << "###########################################" << std::endl;
	for (int i = 0; i < numberOfContacts; i++)
	{
		if (!Contacts[i].isEmpty())
		{
			Contacts[i].printContact(i);
			std::cout << "###########################################" << std::endl;
		}
	}
}

bool PhoneBook::IisEmpty(int index)
{
	return (Contacts[index].isEmpty());
}

int	main(int argc, char **argv)
{
	PhoneBook	PhoneBook;
	int			j;

	std::string str;
	std::string qwe;

	(void)argv;
	if (argc == 1)
	{
		while (1)
		{
			std::cout << G << "add || search || exit" << W << std::endl;
			std::cin >> str;
			if (std::cin.eof())
				break ;
			if (str == "ADD" || str == "add")
				PhoneBook.addContact();
			else if (str == "SEARCH" || str == "search")
			{
				PhoneBook.printSearch();
				std::cout << G << "Enter index (0 - 7): " << W << std::endl;
				std::cin >> j;
				if (std::cin.eof())
					break ;
				if (j >= 0 && j <= 7)
				{
					if (PhoneBook.IisEmpty(j))
						std::cout << R << "Contact at index " << j << " is empty." << W << std::endl;
					else
						PhoneBook.PprintContact(j);
				}
				else
					std::cout << R << "Invalid index. Please enter a value between 0 and 7." << W << std::endl;
			}
			else if (std::cin.eof())
				break ;
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
