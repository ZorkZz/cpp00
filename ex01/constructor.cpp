/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructor.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astachni <astachni@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:51:33 by astachni          #+#    #+#             */
/*   Updated: 2023/07/17 22:59:45 by astachni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class.hpp"

Contact::Contact()
{
	first_name[0] = '\0';
    last_name[0] = '\0';
    nickname[0] = '\0';
    phone_number[0] = '\0';
}

PhoneBook::PhoneBook()
	:my_contact{}
{
	std::cout << "Welcome to the best contact manager" << std::endl;
}
