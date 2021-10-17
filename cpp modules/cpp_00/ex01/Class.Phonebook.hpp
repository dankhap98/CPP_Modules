#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>

class phonebook;

class phonebook
{
private:
    std::string firstname;
	std::string lastname;
    std::string nickname;
    std::string login;
    std::string postal_address;
    std::string email_address;
    std::string phone_number;
    std::string birthday_date;
    std::string favorite_meal;
    std::string underwear_color;
    std::string darkest_secret;    


public:
    phonebook(/* args */);
    ~phonebook();
	    
		
	void    setFirstName(const std::string &first_name);
    void    setLastName(const std::string &last_name);
    void    setNickname(const std::string &nickname);
    void    setLogin(const std::string &login);
    void    setPostalAddress(const std::string &postal_address);
    void    setEmailAddress(const std::string &email_address);
    void    setPhoneNumber(const std::string &phone_number);
    void    setBirthdayDate(const std::string &birthday_date);
    void    setFavoriteMeal(const std::string &favorite_meal);
    void    setUnderwearColor(const std::string &underwear_color);
    void    setDarkestSecret(const std::string &darkest_secret);

    const std::string    &getFirstName();
    const std::string    &getLastName();
    const std::string    &getNickname();
    const std::string    &getLogin();
    const std::string    &getPostalAddress();
    const std::string    &getEmailAdress();
    const std::string    &getPhoneNumber();
    const std::string    &getBirthdayDate();
    const std::string    &getFavoriteMeal();
    const std::string    &getUnderwearColor();
    const std::string    &getDarkestSecret();

    // Additionnal
    void    setup();
    void    display_contact();
    bool    empty();
    void    clear();
};

#endif