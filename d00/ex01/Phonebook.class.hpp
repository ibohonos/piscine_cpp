#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Phonebook {
	public:
		Phonebook(void);
		~Phonebook(void);
		void		setFirstName(std::string str);
		void		setLastNmae(std::string str);
		void		setNickname(std::string str);
		void		setLogin(std::string str);
		void		setPostalAddress(std::string str);
		void		setEmail(std::string str);
		void		setPhone(std::string str);
		void		setBirthday(std::string str);
		void		setFavoriteMeal(std::string str);
		void		setUnderwearColor(std::string str);
		void		setDarkestSecret(std::string str);
		std::string	getFirstName(void);
		std::string	getLastName(void);
		std::string	getNickname(void);
		std::string	getLogin(void);
		std::string	getPostalAddress(void);
		std::string	getEmail(void);
		std::string	getPhone(void);
		std::string	getBirthday(void);
		std::string	getFavoriteMeal(void);
		std::string	getUnderwearColor(void);
		std::string	getDarkestSecret(void);

	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_login;
		std::string	_postal_address;
		std::string	_email;
		std::string	_phone;
		std::string	_birthday;
		std::string	_favorite_meal;
		std::string	_underwear_color;
		std::string	_darkest_secret;

};

#endif