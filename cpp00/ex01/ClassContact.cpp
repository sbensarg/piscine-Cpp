#include "ClassContact.hpp"

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
