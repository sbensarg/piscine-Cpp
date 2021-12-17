#ifndef CLASS_PHONEBOOK_H
#define CLASS_PHONEBOOK_H

#include "ClassContact.hpp"
#include <iomanip>

class PhoneBook
{
	private:
		Contact _tab_contact[8];
	public:
		void addContact(int i);
		void getContacts(int i);
		void search_contact(int i);
};




#endif