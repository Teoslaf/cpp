/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaneski <ttaneski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:39:17 by ttaneski          #+#    #+#             */
/*   Updated: 2023/12/18 14:29:27 by ttaneski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iomanip>
# include <iostream>
#include <cstdlib>

# define W "\033[1;37m"
# define R "\033[1;31m"
# define Y "\033[1;33m"
# define G "\033[1;32m"
# define M "\033[1;35m"
# define B "\033[1;36m"

class Contact
{
  private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string darkest_secret;
	std::string phone_number;

  public:
	Contact(std::string first_name, std::string last_name, std::string nickname,
		std::string darkest_secret, std::string phone_number);
	void createContact();
	void printContact(int index);
	bool isEmpty();
	void err();
	std::string trunc(std::string std);
	~Contact(void);
};

class PhoneBook
{
  private:
	Contact Contacts[8];
	int oldest;
	int numberOfContacts;
  public:
	void addContact();
	void PprintContact(int index);
	bool IisEmpty(int index);
	void printSearch();
	PhoneBook(void);
	~PhoneBook(void);
};

#endif