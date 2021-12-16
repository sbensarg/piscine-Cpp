#include "ClassContact.hpp"
#include <iostream>
#include <iomanip>

// Contact::Contact()
// {
// }

// Contact::Contact(std::string f, std::string l, std::string n, std::string phn, std::string ds)
// {
// 	this->_first_name = f;
// 	this->_last_name = l;
// 	this->_nickname = n;
// 	this->_phone_nbr = phn;
// 	this->_darkest_secret = ds;
// }

// Contact::~Contact()
// {
// }

std::string Contact::getFirstName(void)
{
	return this->_first_name;
}
std::string Contact::getLastName(void)
{
	return this->_last_name;
}
std::string Contact::getNicknam(void)
{
	return this->_nickname;
}
std::string Contact::getDarkestSecret(void)
{
	return this->_darkest_secret;
}

void Contact::setFirstName(std::string f) {
	this->_first_name = f;
	return ;
}
void Contact::setLastName(std::string l) {
	this->_last_name = l;
	return ;
}
void Contact::setNickname(std::string n) {
	this->_nickname = n;
	return ;
}
void Contact::setPhonenbr(std::string p) {
	this->_phone_nbr = p;
	return ;
}

void Contact::setDarkestSecret(std::string d) {
	this->_darkest_secret = d;
	return ;
}

// std::string  Contact::_first_name = "";
// std::string  Contact::_last_name = "";
// std::string  Contact::_nickname = "";
// std::string  Contact::_phone_nbr = "";
// std::string  Contact::_darkest_secret = "";


// void Contact::print_detail(int i)
// {
// 	std::cout <<"  index   " << "|" << " first name " << "|"  << " last name " << "|"  << " nickname " << std::endl;
// 	if (this->_first_name.length() > 10)
// 		this->_first_name = this->_first_name.substr(0, 10) + ".";
// 	if (this->_last_name.length() > 10)
// 		this->_last_name = this->_last_name.substr(0, 10) + ".";
// 	if (this->_nickname.length() > 10)
// 		this->_nickname = this->_nickname.substr(0, 10) + ".";

// 	std::cout <<std::right << std::setw(10) << i << "|"
// 	<< std::right << std::setw(10) << this->_first_name << "|"
// 	<< std::right << std::setw(10) << this->_last_name<< "|"
// 	<< std::right << std::setw(10) << this->_nickname << std::endl;
// }

// void Contact::search_contact(int i)
// {
// 	std::cout <<std::right << std::setw(10) << i << "|"
// 	<< std::right << std::setw(10) << this->_first_name << "|"
// 	<< std::right << std::setw(10) << this->_last_name<< "|"
// 	<< std::right << std::setw(10) << this->_nickname << std::endl;
// }