#include "Phonebook.class.hpp"

Phonebook::Phonebook(void) {
	return ;
}

Phonebook::~Phonebook(void) {
	return ;
}

void		Phonebook::setFirstName(std::string str) {
	this->_first_name = str;
}

void		Phonebook::setLastName(std::string str) {
	this->_last_name = str;
}

void		Phonebook::setNickname(std::string str) {
	this->_nickname = str;
}

void		Phonebook::setLogin(std::string str) {
	this->_login = str;
}

void		Phonebook::setPostalAddress(std::string str) {
	this->_postal_address = str;
}

void		Phonebook::setEmail(std::string str) {
	this->_email = str;
}

void		Phonebook::setPhone(std::string str) {
	this->_phone = str;
}

void		Phonebook::setBirthday(std::string str) {
	this->_birthday = str;
}

void		Phonebook::setFavoriteMeal(std::string str) {
	this->_favorite_meal = str;
}

void		Phonebook::setUnderwearColor(std::string str) {
	this->_underwear_color = str;
}

void		Phonebook::setDarkestSecret(std::string str) {
	this->_darkest_secret = str;
}

std::string	Phonebook::getFirstName() {
	return (this->_first_name);
}

std::string	Phonebook::getLastName() {
	return (this->_last_name);
}

std::string	Phonebook::getNickname() {
	return (this->_nickname);
}

std::string	Phonebook::getLogin() {
	return (this->_login);
}

std::string	Phonebook::getPostalAddress() {
	return (this->_postal_address);
}

std::string	Phonebook::getEmail() {
	return (this->_email);
}

std::string	Phonebook::getPhone() {
	return (this->_phone);
}

std::string	Phonebook::getBirthday() {
	return (this->_birthday);
}

std::string	Phonebook::getFavoriteMeal() {
	return (this->_favorite_meal);
}

std::string	Phonebook::getUnderwearColor() {
	return (this->_underwear_color);
}

std::string	Phonebook::getDarkestSecret() {
	return (this->_darkest_secret);
}
