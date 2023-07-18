/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getters.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astachni <astachni@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 20:11:34 by astachni          #+#    #+#             */
/*   Updated: 2023/07/19 00:09:41 by astachni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class.hpp"

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

Contact *PhoneBook::get_contact()
{
	return my_contact;
}
