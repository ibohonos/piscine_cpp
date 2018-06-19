#include <fstream>
#include <iostream>
#include <cstring>
#include <errno.h>

int	main(int argc, char **argv) {
	std::string		str;
	std::ifstream	ifs;
	int				i;

	if (argc < 2) {
		while (!(std::cin.eof())) {
			getline(std::cin, str);
			std::cout << str << std::endl;
		}
		return (0);
	}

	i = 1;
	while (i < argc) {
		ifs.open(argv[i]);
		if (!(ifs.is_open())) {
			std::cout << "cato9tails: " << argv[i] << ": "
					<< std::strerror(errno) << std::endl;
		}
		while (getline(ifs, str) && ifs.is_open())
			std::cout << str << std::endl;
		ifs.close();
		i++;
	}
}