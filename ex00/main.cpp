#include "Zombie.hpp"

int main()
{
	Zombie* heapZombie = newZombie("HeapZombie");
	heapZombie->announce();
	Zombie* heapZombie2 = newZombie("HeapZombie2");
	heapZombie2->announce();
	randomChump("StackZombie");
	randomChump("StackZombie2");
	delete heapZombie;
	delete heapZombie2;
	return 0;
}
