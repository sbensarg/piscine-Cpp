#ifndef CLASS_CONTACT_H
#define CLASS_CONTACT_H

#include<iostream>

class Contact
{
private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_nbr;
	std::string _darkest_secret;
	
public:
	// Setter
    void setFirstName(std::string  s);
	void setLastName(std::string  s);
	void setNickname(std::string  s);
	void setPhonenbr(std::string  s);
	void setDarkestSecret(std::string  s);

    // Getter
   	std::string getFirstName(void);
	std::string getLastName(void);
	std::string getNicknam(void);
	std::string getDarkestSecret(void);
};

#endif