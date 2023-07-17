/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astachni <astachni@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 22:44:48 by astachni          #+#    #+#             */
/*   Updated: 2023/07/18 00:06:43 by astachni         ###   ########.fr       */
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
	std::cin >> this->first_name;
	std::cout << "Set last name: ";
	std::cin >> this->last_name;
	std::cout << "Set nickname: ";
	std::cin >> this->nickname;
	std::cout << "Set phone number: ";
	std::cin >> this->phone_number;
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
	for (size_t i = 0; i < 56; i++)
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
	std::cout << std::endl;
}
