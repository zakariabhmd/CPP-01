#include "zombie.hpp"

int main()
{
	Zombie *new_z = newZombie("zakaria");
	new_z->announce();
	randomChump("bhmd");
	delete new_z;
	return 0;
}