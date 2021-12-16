#ifndef CLASS_PHONEBOOK_H
#define CLASS_PHONEBOOK_H

#include "ClassContact.hpp"

class PhoneBook
{
	private:
		Contact _tab_contact[8];
		int i;
	public:
		PhoneBook();
		// PhoneBook(Contact *c);
		~PhoneBook();
		void addContact();
		void getContacts();
		// void print_tab_of_contact(int i, Contact *c);
		// void search_contact(int i);
};




#endif