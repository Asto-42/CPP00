/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquil <jquil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:01:23 by jquil             #+#    #+#             */
/*   Updated: 2024/01/10 13:08:32 by jquil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(int argc, char **argv)
{
	int	x = 0;

	if (argc <= 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	std::string res;
	while (++x < argc)
	{
		std::string str(argv[x]);
		int y = -1;
		while (str[++y])
		{
			if ((str[y] >= 97 && str[y] <= 122))
				str[y] = str[y] - 32;
		}
		res += str;
	}
	std::cout << res << std::endl;
	return (0);
}


