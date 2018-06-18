#include <iostream>
#include <fstream>

void	replace(std::string name, std::string s1, std::string s2)
{
	char			c;
	std::string		tmp;
	std::ifstream	iffile(name);
	int				i;

	i = 0;
	if (!iffile.is_open()) {
		std::cout << "No such file." << std::endl;
		return ;
	}
	for (int j = 0; j < (int)name.length(); j++) {
		name[j] = std::toupper(name[j]);
	}
	std::ofstream	offile(name + ".replace");
	while (iffile.get(c))
	{
		if (c == s1[i])
		{
			tmp += c;
			if (tmp.length() == s1.length())
			{
				offile << s2;
				tmp = "";
				i = 0;
			}
			else
				i++;
		}
		else
		{
			i = 0;
			if (tmp != "")
			{
				offile << tmp << c;
				tmp = "";
			}
			else
				offile << c;
		}
	}
	iffile.close();
	offile.close();
}

int		main(int argc, char **argv)
{
	if (argc < 4) {
		std::cout << "Error usege. Please enter name, s1 and s2" << std::endl;
		return (0);
	}
	if (!argv[1][0] || !argv[2][0] || !argv[3][0])
	{
		std::cout << "Error usege. Please enter not empty name, s1 and s2" << std::endl;
		return (0);
	}

	replace(argv[1], argv[2], argv[3]);

	return (0);
}
