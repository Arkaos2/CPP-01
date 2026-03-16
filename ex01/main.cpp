#include "Zombie.hpp"

int main()
{
	int n = 7;
	Zombie* horde = zombieHorde(n, "LOL");
	delete[] horde;
	horde = 0;
	return 0;
}

