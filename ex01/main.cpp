/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astachni <astachni@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:18:01 by astachni          #+#    #+#             */
/*   Updated: 2023/07/19 00:37:29 by astachni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class.hpp"

int	main(void)
{
	std::string	key_word;
	PhoneBook 	my_phone_book;
	Contact		*temp_contact;

	while (true)
	{
		std::cout << "ADD, SEARCH or EXIT: ";
		if (std::cin >> key_word)
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
				for (size_t i = 0; i < 67; i++)
				{
					std::cout << "-";
				}
				std::cout << std::endl;
				temp_contact->print_contact();
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
