/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astachni <astachni@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 22:44:48 by astachni          #+#    #+#             */
/*   Updated: 2023/10/02 16:19:19 by astachni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class.hpp"

void	PhoneBook::choose_contact(void)
{
	static int	i = 0;
	this->my_contact[i].set_contact();
	i++;
	if (i == 8)
		i = 0;
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

void	print_ten_char(std::string str)
{
	std::size_t	size = str.size();

	if (size <= 10)
	{
		std::cout << str;
		for (std::size_t i = 0; 10 - i != size; i++)
		{
			std::cout << " ";
		}
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

void	Contact::aff_contact(int index)
{
	std::string first_name = get_first_name();
	std::string	last_name = get_last_name();
	std::string nickname = get_nickname();
	std::string phone_number = get_phone_number();
	std::string	darkest_secret = get_darkest_secret();
	for (size_t i = 0; i < 67; i++)
	{
		std::cout << "-";
	}
	std::cout << std::endl;
	std::cout << "|";
	std::cout << index;
	for (std::size_t i = 0; i < 9; i++)
	{
		std::cout << " ";
	}
	std::cout << "|";
	print_ten_char(first_name);
	print_ten_char(last_name);
	print_ten_char(nickname);
	print_ten_char(phone_number);
	print_ten_char(darkest_secret);
	std::cout << std::endl;
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
