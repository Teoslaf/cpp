/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaneski <ttaneski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:39:17 by ttaneski          #+#    #+#             */
/*   Updated: 2023/12/12 15:35:16 by ttaneski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
class Contact
{
	public:
	Contact(void);
	~Contact(void);
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string darkest_secret;
	int			phone_number;
};

class PhoneBook
{
	public:
	std::string Contact[8];
	PhoneBook(void);
	~PhoneBook(void);
};


#endif