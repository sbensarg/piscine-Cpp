#include "ClassPhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook()
{
	
}
PhoneBook::PhoneBook(Contact *c)
{
	this->_tab_contact = c;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::addContact(Contact* c)
{
    this->_tab_contact = c;
}
void PhoneBook::getContacts(int i) const
{
	int k = 0;
	std::cout <<"  index   " << "|" << " first name " << "|"  << " last name " << "|"  << " nickname " << std::endl;
	while (k < i)
	{
		if (this->_tab_contact[k].getFirstName().length() > 10)
			this->_tab_contact[k].getFirstName() = this->_tab_contact[k].getFirstName().substr(0, 10) + ".";
		if (this->_tab_contact[k].getLastName().length() > 10)
			this->_tab_contact[k].getLastName() = this->_tab_contact[k].getLastName().substr(0, 10) + ".";
		if (this->_tab_contact[k].getNicknam().length() > 10)
			this->_tab_contact[k].getNicknam() = this->_tab_contact[k].getNicknam().substr(0, 10) + ".";

		std::cout <<std::right << std::setw(10) << k << "|"
		<< std::right << std::setw(10) << this->_tab_contact[k].getFirstName() << "|"
		<< std::right << std::setw(10) << this->_tab_contact[k].getLastName()<< "|"
		<< std::right << std::setw(10) << this->_tab_contact[k].getNicknam() << std::endl;
		k++;
	}
}


// void PhoneBook::print_tab_of_contact(int i, Contact *c)
// {
// 	int k = 0;
// 	std::cout <<"  index   " << "|" << " first name " << "|"  << " last name " << "|"  << " nickname " << std::endl;
// 	while (k < i)
// 	{
// 		if (c[k].getFirstName().length() > 10)
// 			c[k].getFirstName() = c[k].getFirstName().substr(0, 10) + ".";
// 		if (c[k].getLastName().length() > 10)
// 			c[k].getLastName() = c[k].getLastName().substr(0, 10) + ".";
// 		if (c[k].getNicknam().length() > 10)
// 			c[k].getNicknam() = c[k].getNicknam().substr(0, 10) + ".";

// 		std::cout <<std::right << std::setw(10) << k << "|"
// 		<< std::right << std::setw(10) << c[k].getFirstName() << "|"
// 		<< std::right << std::setw(10) << c[k].getLastName()<< "|"
// 		<< std::right << std::setw(10) << c[k].getNicknam() << std::endl;
// 		k++;
// 	}
	
// }

// void PhoneBook::search_contact(int i)
// {
// 	std::cout <<std::right << std::setw(10) << i << "|"
// 	<< std::right << std::setw(10) << Contact::getFirstName() << "|"
// 	<< std::right << std::setw(10) << Contact::getLastName()<< "|"
// 	<< std::right << std::setw(10) << Contact::getNicknam() << std::endl;
// }
