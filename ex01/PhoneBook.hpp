/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaneski <ttaneski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:39:17 by ttaneski          #+#    #+#             */
/*   Updated: 2023/12/13 15:13:53 by ttaneski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iomanip>
# include <iostream>

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
	void printContact();

	~Contact(void);
};

/* class PhoneBook
{
  public:
	int contactCount;
	Contact Contact[8];
	PhoneBook(void);
	~PhoneBook(void);
}; */

#endif