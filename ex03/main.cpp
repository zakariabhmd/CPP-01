#include "humanA.hpp"
#include "humanB.hpp"
#include "weapon.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA zakaria("zakaria", club);
		zakaria.attack();
		club.setType("some other type of club");
		zakaria.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB salah("salah");
		salah.setWeapon(club);
		salah.attack();
		club.setType("some other type of club");
		salah.attack();
	}
	return 0;
}