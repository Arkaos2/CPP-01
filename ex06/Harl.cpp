#include "Harl.hpp"

Harl::Harl() {};

void Harl::debug()
{
	std::cout << " : debug message" << std::endl;
}

void Harl::warning()
{
	std::cout << " : warning message" << std::endl;
}

void Harl::error()
{
	std::cout << " : error message" << std::endl;
}

void Harl::info()
{
	std::cout << " : info message" << std::endl;
}

void Harl::complain(std::string level)
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*functions[])() = {
			&Harl::debug,
			&Harl::info,
			&Harl::warning,
			&Harl::error
	};
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
			(this->*functions[i])();

	}
}
