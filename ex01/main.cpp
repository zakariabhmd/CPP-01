#include "zombie.hpp"

int main()
{
	int	num = 10;
	Zombie *new_z = zombieHorde(num, "zakaria");
	int i = 0;
	while(i < num)
	{
		new_z[i].announce();
		i++;
	}
	delete[] new_z;
}