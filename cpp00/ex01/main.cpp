#include "ClassContact.hpp"
#include "ClassPhoneBook.hpp"
#include <iostream>

int main(void)
{
	char		cmd[7];
	int			i;
	PhoneBook	insPhonebook;

	i = 0;
	while (1 && ! std::cin.eof())
	{
		std::cout << ">>: ";
		std::cin >>cmd;
		if (std::strcmp(cmd, "ADD") == 0)
		{
			if (i < 8)
			{
				insPhonebook.addContact(i);
				i++;
			}
			else
				std::cout << "le phonebook n'accepte que 8 contacts" << std::endl;
		}
		else if (std::strcmp(cmd, "SEARCH") == 0) 
		{
			insPhonebook.getContacts(i);
			int index;
			std::cout << "enter l'index de contact que vous souhaitez afficher" << std::endl;
			if(!(std::cin >>index))
			{	
				std::cout << "invalide index" << std::endl;
			}
			else if (!(index >= 0 && index < i))
				 std::cout << "invalide index" << std::endl;
			else
				insPhonebook.search_contact(index); 

		}
		else if (std::strcmp(cmd, "EXIT") == 0) 
			return (1);
		else
			std::cout << "Command not valid" << std::endl;
	}
	return (0);
}