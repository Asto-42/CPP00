/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MAPB.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:12:17 by jquil             #+#    #+#             */
/*   Updated: 2024/01/16 15:46:22 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAPB_H
# define MAPB_H

#include <string>
#include <iostream>
#include <cstdio>


class Contact
{
	private:

	std::string FirstName;
	std::string LastName;
	std::string NickName;
	std::string PhoneNumber;
	std::string DarkestSecret;

	public:

	Contact();
	std::string getFirstName();
	std::string getLastName();
	std::string getNickName();
	std::string getPhoneNumber();
	std::string getDarkestSecret();
	bool setFirstName(std::string);
	bool setLastName(std::string);
	bool setNickName(std::string);
	bool setPhoneNumber(std::string);
	bool setDarkestSecret(std::string);
};

class PhoneBook
{
	private:

	Contact _Contact[8];

	public:

	PhoneBook();
	void	AddStuff();
	void	SearchStuff();
};

#endif
