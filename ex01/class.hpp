/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astachni <astachni@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:19:00 by astachni          #+#    #+#             */
/*   Updated: 2023/07/19 00:38:01 by astachni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_HPP

# define CLASS_HPP

# include <iostream>
# include <cstring>
# include <string>

class Contact
{
	public:
		Contact();
		void		aff_contact(int index);
		void		set_contact(void);
		void		print_contact();
		std::string	get_first_name() const;
		std::string	get_last_name() const;
		std::string	get_nickname() const;
		std::string	get_phone_number() const;
		std::string	get_darkest_secret() const;

	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
};

class PhoneBook
{
	public:
		PhoneBook();
		void	choose_contact(void);
		Contact	*get_contact(void);

	private:
		Contact my_contact[8];
};

#endif
