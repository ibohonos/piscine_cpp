#include "Phonebook.class.hpp"

void	addContact(Phonebook *book)
{
	std::string buf = "";

	std::cout << "Enter first name: ";
	std::getline(std::cin, buf);
	book->setFirstName(buf);
	std::cout << "Enter last name: ";
	std::getline(std::cin, buf);
	book->setLastName(buf);
	std::cout << "Enter nickname: ";
	std::getline(std::cin, buf);
	book->setNickname(buf);
	std::cout << "Enter login: ";
	std::getline(std::cin, buf);
	book->setLogin(buf);
	std::cout << "Enter postal address: ";
	std::getline(std::cin, buf);
	book->setPostalAddress(buf);
	std::cout << "Enter email address: ";
	std::getline(std::cin, buf);
	book->setEmail(buf);
	std::cout << "Enter phone number: ";
	std::getline(std::cin, buf);
	book->setPhone(buf);
	std::cout << "Enter birthday date: ";
	std::getline(std::cin, buf);
	book->setBirthday(buf);
	std::cout << "Enter favorite meal: ";
	std::getline(std::cin, buf);
	book->setFavoriteMeal(buf);
	std::cout << "Enter underwear color: ";
	std::getline(std::cin, buf);
	book->setUnderwearColor(buf);
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, buf);
	book->setDarkestSecret(buf);
}

void	search(Phonebook book[8], int i)
{
	int			k;
	std::string	index;

	std::cout << std::setw(11) << "index|";
	std::cout << std::setw(11) << "first name|";
	std::cout << std::setw(11) << "last name|";
	std::cout << std::setw(10) << "nickname" << std::endl;
	k = 0;
	while (k < i) {
		std::cout << std::setw(10) << k << "|";
		if (book[k].getFirstName().size() > 10)
			std::cout << std::setw(10) << book[k].getFirstName().substr(0, 9) + "." << "|";
		else
			std::cout << std::setw(10) << book[k].getFirstName() << "|";
		if (book[k].getLastName().size() > 10)
			std::cout << std::setw(10) << book[k].getLastName().substr(0, 9) + "." << "|";
		else
			std::cout << std::setw(10) << book[k].getLastName() << "|";
		if (book[k].getNickname().size() > 10)
			std::cout << std::setw(10) << book[k].getNickname().substr(0, 9) + "." << std::endl;
		else
			std::cout << std::setw(10) << book[k].getNickname() << std::endl;
		k++;
	}
	std::cout << "Enter index of contact to display: ";
	std::getline(std::cin, index);
	if ((index[0] - '0') < i && (index[0] - '0') >= 0 && !index[1]) {
		std::cout << "Contact information:" << std::endl;
		std::cout << "First name:     " << book[index[0] - '0'].getFirstName() << std::endl;
		std::cout << "Last name:      " << book[index[0] - '0'].getLastName() << std::endl;
		std::cout << "Nickname:       " << book[index[0] - '0'].getNickname() << std::endl;
		std::cout << "Login:          " << book[index[0] - '0'].getLogin() << std::endl;
		std::cout << "Postal address: " << book[index[0] - '0'].getPostalAddress() << std::endl;
		std::cout << "Email address:  " << book[index[0] - '0'].getEmail() << std::endl;
		std::cout << "Phone number:   " << book[index[0] - '0'].getPhone() << std::endl;
		std::cout << "Bithday date:   " << book[index[0] - '0'].getBirthday() << std::endl;
		std::cout << "Favorite meal:  " << book[index[0] - '0'].getFavoriteMeal() << std::endl;
		std::cout << "Undewear color: " << book[index[0] - '0'].getUnderwearColor() << std::endl;
		std::cout << "Darkest secret: " << book[index[0] - '0'].getDarkestSecret() << std::endl;
	}
	else {
		std::cout << "Sorry, no such index..." << std::endl;
	}
}

int		main(void)
{
	int			i = 0;
	Phonebook	book[8];
	std::string	command;

	std::cout << "Hello! alowed commands: ADD, SEARCH and EXIT." << std::endl;
	while (1)
	{
		std::cout << "Enter command: ";
		std::getline(std::cin, command);
		if (command == "EXIT")
			break ;
		else if (command == "ADD")
		{
			if (i < 8)
				addContact(&book[i++]);
			else
				std::cout << "Phonebook is full" << std::endl;
		}
		else if (command == "SEARCH")
			search(book, i);
		else
			std::cout << "Unknown command " << command << std::endl;
	}
	return (0);
}
