/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MAPB.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:12:22 by jquil             #+#    #+#             */
/*   Updated: 2024/01/16 15:45:08 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MAPB.hpp"

//std::cout << res << std::endl;

int	main()
{
	std::string str;
	bool	run = 0;
	PhoneBook Rep;
	while (run == 0)
	{
		std::getline(std::cin, str);
		if (str == "ADD")
			Rep.AddStuff();
		if (str == "SEARCH")
			Rep.SearchStuff();
		if (str == "EXIT")
			run = 1;
	}
	return (0);
	//if (std::cin == "ADD" << std::endl)
}
