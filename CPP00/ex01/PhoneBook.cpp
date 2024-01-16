/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:39:16 by jquil             #+#    #+#             */
/*   Updated: 2024/01/16 16:03:06 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MAPB.hpp"

PhoneBook::PhoneBook()
{
}

void	PhoneBook::AddStuff()
{
	static int	x = 0;
	std::string str;

	std::cout << "ADD MODE" << std::endl;

	std::cout << "First Name : " << std::endl;
	std::getline(std::cin, str);
	this->_Contact[x].setFirstName(str);

	std::cout << "Last Name : " << std::endl;
	std::getline(std::cin, str);
	this->_Contact[x].setLastName(str);

	std::cout << "Nick Name : " << std::endl;
	std::getline(std::cin, str);
	this->_Contact[x].setNickName(str);

	std::cout << "Phone Number : " << std::endl;
	std::getline(std::cin, str);
	this->_Contact[x].setPhoneNumber(str);

	std::cout << "Darkest Secret : " << std::endl;
	std::getline(std::cin, str);
	this->_Contact[x].setDarkestSecret(str);

	x++;
	if (x == 8)
		x = 0;
}
void	PhoneBook::SearchStuff()
{
	int	x = 0;
	std::cout << x << std::endl;
	std::cout << _Contact[x].getFirstName() << std::endl;
	std::cout << _Contact[x].getLastName() << std::endl;
	std::cout << _Contact[x].getNickName() << std::endl;
}
