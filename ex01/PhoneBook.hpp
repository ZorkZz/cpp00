/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astachni <astachni@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:19:00 by astachni          #+#    #+#             */
/*   Updated: 2023/10/15 21:55:02 by astachni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

# include "prototype.hpp"

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
