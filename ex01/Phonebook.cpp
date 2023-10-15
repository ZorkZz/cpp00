#include "prototype.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "Welcome to the best contact manager" << std::endl;
}

void	PhoneBook::choose_contact(void)
{
	static int	i = 0;
	this->my_contact[i].set_contact();
	i++;
	if (i == 8)
		i = 0;
}

Contact *PhoneBook::get_contact()
{
	return my_contact;
}