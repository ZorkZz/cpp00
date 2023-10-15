/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astachni <astachni@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 22:44:48 by astachni          #+#    #+#             */
/*   Updated: 2023/10/15 21:47:32 by astachni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototype.hpp"

Contact::Contact()
{
	first_name[0] = '\0';
    last_name[0] = '\0';
    nickname[0] = '\0';
    phone_number[0] = '\0';
}

void	Contact::set_contact()
{
	std::cout << "Set first name: ";
	std::getline(std::cin, this->first_name);
	std::cout << "Set last name: ";
	std::getline(std::cin, this->last_name);
	std::cout << "Set nickname: ";
	std::getline(std::cin, this->nickname);
	std::cout << "Set phone number: ";
	std::getline(std::cin, this->phone_number);
	std::cout << "Set darkest secret: ";
	std::getline(std::cin, this->darkest_secret);
}

void	Contact::aff_contact(int index)
{
	std::string first_name = get_first_name();
	std::string	last_name = get_last_name();
	std::string nickname = get_nickname();
	std::string phone_number = get_phone_number();
	std::string	darkest_secret = get_darkest_secret();
	for (size_t i = 0; i < 45; i++)
	{
		std::cout << "-";
	}
	std::cout << std::endl;
	std::cout << "|";
	for (size_t j = 0; j < 9; j++)
	{
		std::cout << " ";
	}
	std::cout << index;
	std::cout << "|";
	print_ten_char(first_name);
	print_ten_char(last_name);
	print_ten_char(nickname);
	std::cout << std::endl;
}

int	Contact::print_contact(void)
{
	bool		is_passed;
	std::string	key_word;
	int			index;

	is_passed = 0;	
	while (is_passed == 0)
	{
		std::cout << "enter the index of contact: ";
		if (std::cin >> key_word)
		{
			if (!is_str_digit(key_word) || (atoi(key_word.c_str()) < 0 || atoi(key_word.c_str()) > 8))
			{
				std::cout << "Error bad index" << std::endl;
				return 0;
			}
			index = atoi(key_word.c_str());
			if (this[index].get_first_name().c_str()[0] == 0)
			{
				std::cout << "no contacts here" << std::endl;
				return 0;
			}
			std::cout << this[index].get_first_name() << std::endl;
			std::cout << this[index].get_last_name() << std::endl;
			std::cout << this[index].get_nickname() << std::endl;
			std::cout << this[index].get_phone_number() << std::endl;
			std::cout << this[index].get_darkest_secret() << std::endl;
			is_passed = 1;
		}
		if (std::cin.eof() == true)
			return 1;
	}
	return 0;
}

std::string	Contact::get_first_name() const
{
	return first_name;
}

std::string	Contact::get_last_name() const
{
	return last_name;
}

std::string	Contact::get_nickname() const
{
	return nickname;
}

std::string	Contact::get_phone_number() const
{
	return phone_number;
}

std::string	Contact::get_darkest_secret() const
{
	return darkest_secret;
}
