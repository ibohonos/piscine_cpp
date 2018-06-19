#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <fstream>
#include <iostream>
#include <ctime>
#include <sstream>
#include <iomanip>

class Logger {
	public:
		struct dest
		{
			std::string	dest_name;
			void		(Logger::*l)(std::string str);

		};

		dest 	destinations[2];

		Logger(void);
		Logger(std::string file_name);
		~Logger(void);
		void		log(std::string const &dest, std::string const &message);

	private:
		void		logToConsole(std::string str);
		void		logToFile(std::string str);
		std::string	makeLogEntry(std::string msg) const;
		void		initDest(void);

		std::string		_file_name;
		std::ofstream	_ofs;
};

#endif