#ifndef CLASS_CONTACT_H
#define CLASS_CONTACT_H

#include<iostream>

class Contact
{
private:
	static std::string _first_name;
	static std::string _last_name;
	static std::string _nickname;
	static std::string _phone_nbr;
	static std::string _darkest_secret;
	
public:
	Contact();
	Contact(std::string f, std::string l, std::string n, std::string phn, std::string ds);
	~Contact();

	// void print_detail(int i);
	// void search_contact(int i);

	// Setter
    void setFirstName(std::string  s);
	void setLastName(std::string  s);
	void setNickname(std::string  s);
	void setPhonenbr(std::string  s);
	void setDarkestSecret(std::string  s);

    // Getter
   	static std::string getFirstName(void);
	static	std::string getLastName(void) ;
	static	std::string getNicknam(void) ;
	static std::string getDarkestSecret(void) ;
};






#endif