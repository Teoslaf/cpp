/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaneski <ttaneski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:39:14 by ttaneski          #+#    #+#             */
/*   Updated: 2023/12/13 16:58:12 by ttaneski         ###   ########.fr       */
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
	std::cout << "Contact destroyed"
				<< "\033[0m" << std::endl;
}
void Contact::createContact()
{
	std::cout << "\033[1;36m"
				<< "Enter First Name"
				<< "\033[0m" << std::endl;
	std::cin >> first_name;
	std::cout << "\033[1;36m"
				<< "Enter Last Name"
				<< "\033[0m" << std::endl;
	std::cin >> last_name;
	std::cout << "\033[1;36m"
				<< "Enter Nickname"
				<< "\033[0m" << std::endl;
	std::cin >> nickname;
	std::cout << "\033[1;36m"
				<< "Enter Darkest Secret"
				<< "\033[0m" << std::endl;
	std::cin >> darkest_secret;
	std::cout << "\033[1;36m"
				<< "Enter Phone Number"
				<< "\033[0m" << std::endl;
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
	PhoneBook	PhoneBook;
	int			i;

	std::string str;
	i = 0;
	(void)argv;
	if (argc == 1)
	{
		while (1)
		{
			std::cout << "\033[1;32m"
						<< "Enter input: ADD, SEARCH or EXIT"
						<< "\033[0m" << std::endl;
			std::cin >> str;
			if (str == "ADD" || str == "add")
			{
				PhoneBook.Contacts[i].createContact();
				i = (i + 1) % 8;
			}
			else if (str == "SEARCH" || str == "search")
			{
				std::cout << "\033[1;32m" << "Enter index (0 - 7): " << "\033[0m" << std::endl;
				std::cin >> i;
				if (i >= 0 && i <= 7)
				{
					if (PhoneBook.Contacts[i].isEmpty())
						std::cout << "\033[1;31m"
									<< "Contact at index " << i << " is empty."
									<< "\033[0m" << std::endl;
					else
						PhoneBook.Contacts[i].printContact();
				}
				else
					std::cout << "\033[1;31m"
								<< "Invalid index. Please enter a value between 0 and 7."
								<< "\033[0m" << std::endl;
			}
			else if (str == "EXIT" || str == "exit")
			{
				std::cout <<  "\033[1;33m" << "c ya" << "\033[0m" << std::endl;
				break ;
			}
			else
				std::cout << "\033[1;31m"
							<< "Try again!"
							<< "\033[0m" << std::endl;
		}
	}
	else
		std::cout << "error" << std::endl;
}
