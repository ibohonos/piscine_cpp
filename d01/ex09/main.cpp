#include "Logger.hpp"

int	main(void) {
	Logger lg;

	lg.log("console", "hello");
	lg.log("console", "logging to console");
	lg.log("file", "hello");
	lg.log("file", "logging to file");
	lg.log("cmd", "no logging");
}