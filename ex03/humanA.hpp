#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "weapon.hpp"

class HumanA{
	private:
		Weapon &wep;
		std::string name;
	public :
		void attack();
		HumanA(std::string name, Weapon &W);
		~HumanA();
};

#endif