/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:39:16 by jquil             #+#    #+#             */
/*   Updated: 2024/01/16 15:46:08 by jquil            ###   ########.fr       */
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

	std::getline(std::cin, str);
	this->_Contact[x].setFirstName(str);
	std::getline(std::cin, str);
	this->_Contact[x].setLastName(str);
	std::getline(std::cin, str);
	this->_Contact[x].setNickName(str);
	std::getline(std::cin, str);
	this->_Contact[x].setPhoneNumber(str);
	std::getline(std::cin, str);
	this->_Contact[x].setDarkestSecret(str);
	x++;
	if (x == 8)
		x = 0;
}
void	PhoneBook::SearchStuff()
{

}
