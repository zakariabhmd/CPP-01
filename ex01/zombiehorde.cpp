#include "zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
	int i;

    if(N <= 0)
    {
        std::cout<<"ERROR"<<std::endl;
        exit(1);
    }
    i = 0;
	Zombie *new_z = new Zombie[N];
	while(i < N)
	{
		new_z[i].set(name);
		i++;
	}
	return (new_z);
}