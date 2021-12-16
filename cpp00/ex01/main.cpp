#include "ClassContact.hpp"
#include "ClassPhoneBook.hpp"
#include <iostream>
#include <string>


int main(void)
{
	char cmd[7];
	int i;
	i = 0;
	std::string fname;
	std::string lname;
	std::string nname;
	std::string phn;
	std::string ds;

	// Contact insContact[8];
	PhoneBook insPhonebook;
	while (1 && ! std::cin.eof())
	{
		std::cout << ">>: ";
		std::cin >>cmd;
		if (std::strcmp(cmd, "ADD") == 0)
		{
			if (i < 8)
			{
				insPhonebook.addContact();
				i++;
			}
			else
				std::cout << "le phonebook n'accepte que 8 contacts" << std::endl;
		}
		else if (std::strcmp(cmd, "SEARCH") == 0) 
		{
			//insPhonebook.print_tab_of_contact(i, insContact);
			insPhonebook.getContacts();
			// int k = 0;
			// while (k < i)
			// {
			// 	//insContact[k].print_detail(k);
			// 	insPhonebook.print_tab_of_contact(k, &insContact[k]);
			// 	k++;
			// }
			// int index;
			// std::cout << "enter l'index de contact que vous souhaitez afficher" << std::endl;
			// if(!(std::cin >>index))
			// {	
			// 	/*
			// 			The cin. clear() clears the error flag on cin 
			// 			(so that future I/O operations will work correctly)
			// 		*/
			// 	std::cin.clear();
			// 	 std::cout << "invalide index" << std::endl;
			// }
			// else if (!(index >= 0 && index < k))
			// 	 std::cout << "invalide index" << std::endl;
			// else
				//insPhonebook.search_contact(index);
				//insContact[index].search_contact(index);
				/*
						to clear the input buffer 
						it ignores the amount of characters you specify when you call it, up to the char 
						you specify as a breakpoint
					*/
			std::cin.ignore(10000, '\n');  

		}
		else if (std::strcmp(cmd, "EXIT") == 0) 
			return (1);
		else
			std::cout << "Command not valid" << std::endl;
	}
		
	
	return (0);
}