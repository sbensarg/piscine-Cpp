#include "ClassPhoneBook.hpp"

void PhoneBook::addContact(int i)
{
	std::string fname;
	std::string lname;
	std::string nname;
	std::string phn;
	std::string ds;

	std::cout << "First name: ";
	std::cin >>fname;
	this->_tab_contact[i].setFirstName(fname);
	std::cout << "Last name: ";
	std::cin >>lname;
	this->_tab_contact[i].setLastName(lname);
	std::cout << "Nickname: ";
	std::cin >>nname;
	this->_tab_contact[i].setNickname(nname);
	std::cout << "Phone number: ";
	std::cin >>phn;
	this->_tab_contact[i].setPhonenbr(phn);
	std::cout << "Darkest secret : ";
	std::cin >>ds;
	this->_tab_contact[i].setDarkestSecret(ds);
}

void PhoneBook::getContacts(int i)
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

void PhoneBook::search_contact(int i)
{
	std::cout <<std::right << std::setw(10) << i << "|"
	<< std::right << std::setw(10) << this->_tab_contact[i].getFirstName() << "|"
	<< std::right << std::setw(10) <<this->_tab_contact[i].getLastName() << "|"
	<< std::right << std::setw(10) << this->_tab_contact[i].getNicknam() << std::endl;
}
