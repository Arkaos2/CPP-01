#include "Harl.hpp"

enum Level { DEBUG, INFO, WARNING, ERROR, UNKNOWN };

Level getLevel(const std::string& level) {
		if (level == "DEBUG") return DEBUG;
		if (level == "INFO") return INFO;
		if (level == "WARNING") return WARNING;
		if (level == "ERROR") return ERROR;
		return UNKNOWN;
}

int main(int argc, char **argv) {
	if (argc != 2)
		return 1;
	Harl harl;
	Level level = getLevel(argv[1]);
	switch(level) {
		case DEBUG:
			harl.complain("DEBUG");
			// fall through
		case INFO:
			harl.complain("INFO");
			// fall through
		case WARNING:
			harl.complain("WARNING");
			// fall through
		case ERROR:
			harl.complain("ERROR");
			break;
		default:
			std::cout << "Niveau inconnu\n";
}
}
