/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astachni <astachni@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:18:01 by astachni          #+#    #+#             */
/*   Updated: 2023/10/15 21:54:22 by astachni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototype.hpp"

int	main(void)
{
	std::string	key_word;
	PhoneBook 	my_phone_book;
	Contact		*temp_contact;

	while (true)
	{
		std::cout << "ADD, SEARCH or EXIT: ";
		if (std::getline(std::cin, key_word))
		{
			if (key_word == "EXIT")
				break ;
			else if (key_word == "ADD")
				my_phone_book.choose_contact();
			else if (key_word == "SEARCH")
			{
				temp_contact = my_phone_book.get_contact();
				for (size_t i = 0; i < 8; i++)
				{
					temp_contact[i].aff_contact(i);
				}
				for (size_t i = 0; i < 45; i++)
				{
					std::cout << "-";
				}
				std::cout << std::endl;
				if (temp_contact->print_contact() != 0)
					return (1);
			}
		}
		else
		{
			std::cout << std::endl << "Invalid Error" << std::endl;
			return (1);
		}
	}
	return (0);
}


void	print_ten_char(std::string str)
{
	std::size_t	size = str.size();

	if (size <= 10)
	{
		for (std::size_t i = 10; i > size; i--)
		{
			std::cout << " ";
		}
		std::cout << str;
	}
	else
	{
		for (std::size_t i = 0; i < 9; i++)
		{
			std::cout << str[i];
		}
		std::cout << ".";
	}
	std::cout << "|";
}

bool	is_str_digit(std::string str)
{
	for (std::size_t i = 0; i < str.size(); i++)
	{
		if (!std::isdigit(str[i]))
			return (false);
	}
	return(true);
	
}
