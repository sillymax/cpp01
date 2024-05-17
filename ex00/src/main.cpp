#include "Zombie.hpp"
#include <memory>

int main(void)
{
	Zombie* heapZombie = newZombie("heapZombie");
	heapZombie->announce();
	delete heapZombie;
	heapZombie = nullptr;

	randomChump("stackZombie");
}