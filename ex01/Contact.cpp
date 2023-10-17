/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astachni <astachni@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 22:44:48 by astachni          #+#    #+#             */
/*   Updated: 2023/10/17 14:53:01 by astachni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototype.hpp"

Contact::Contact()
{
}

void	Contact::set_contact()
{
	while (is_printable(this->first_name) == 1)
	{
		std::cout << "Set first name: ";
		if (!std::getline(std::cin, this->first_name))
			return ;
	}
	while (is_printable(this->last_name) == 1)
	{
		std::cout << "Set last name: ";
		if(!std::getline(std::cin, this->last_name))
			return ;
	}
	while (is_printable(this->nickname) == 1)
	{
		std::cout << "Set nickname: ";
		if(!std::getline(std::cin, this->nickname))
			return ;
	}
	while (is_printable(this->phone_number) == 1)
	{
		std::cout << "Set phone number: ";
		if(!std::getline(std::cin, this->phone_number))
			return ;
	}
	while (is_printable(this->darkest_secret) == 1)
	{
		std::cout << "Set darkest secret: ";
		if(!std::getline(std::cin, this->darkest_secret))
			return ;
	}
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
