#include "Class.Phonebook.hpp"

phonebook::phonebook() {}

phonebook::~phonebook() {}

void	phonebook::setFirstName(const std::string &first_name)
{ this->firstname = first_name; }

void	phonebook::setLastName(const std::string &last_name)
{ this->lastname = last_name; }

void	phonebook::setNickname(const std::string &nickname)
{ this->nickname = nickname; }

void	phonebook::setPhoneNumber(const std::string &phone_number)
{ this->phone_number = phone_number; }

void    phonebook::setDarkestSecret(const std::string &darkest_secret)
{ this->darkest_secret = darkest_secret; }

const std::string    &phonebook::getFirstName()
{ return (this->firstname); }

const std::string    &phonebook::getLastName()
{ return (this->lastname); }

const std::string    &phonebook::getNickname()
{ return (this->nickname); }

const std::string    &phonebook::getPhoneNumber()
{ return (this->phone_number); }

const std::string    &phonebook::getDarkestSecret()
{ return (this->darkest_secret); }

void	phonebook::setup()
{
	std::string tmp;


	std::cout<<"first name: ";
	getline(std::cin, tmp);
	this->setFirstName(tmp);
	std::cout<<"last name: ";
	getline(std::cin, tmp);
	this->setLastName(tmp);
	std::cout<<"nickname: ";
	getline(std::cin, tmp);
	this->setNickname(tmp);
	std::cout<<"phone number: ";
	getline(std::cin, tmp);
	std::cout<<"darkest secret ";
	getline(std::cin, tmp);
	this->setDarkestSecret(tmp);
}

void phonebook::display_contact()
{
	if (this->getFirstName().length() > 10)
		std::cout<<this->getFirstName().substr(0, 10)<<".";
	else
		std::cout<<std::setw(10)<<this->getFirstName()<<".";
	if (this->getLastName().length() > 10)
		std::cout<<this->getLastName().substr(0, 10)<<".";
	else
		std::cout<<std::setw(10)<<this->getLastName()<<".";
	if (this->getNickname().length() > 10)
		std::cout<<this->getNickname().substr(0, 10)<<std::endl;
	else
		std::cout<<std::setw(10)<<this->getNickname()<<std::endl;
}

void	phonebook::clear()
{
	this->firstname.clear();
	this->lastname.clear();
	this->nickname.clear();
	this->login.clear();
	this->postal_address.clear();
	this->email_address.clear();
	this->phone_number.clear();
	this->birthday_date.clear();
	this->favorite_meal.clear();
	this->underwear_color.clear();
	this->darkest_secret.clear();
}