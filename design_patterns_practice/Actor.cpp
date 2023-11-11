#include "Actor.h"
#include <iostream>

void Actor::Jump()
{ 
	std::cout << "Jump!" << std::endl; 
}

void Actor::Fire()
{
	std::cout << "Fire!" << std::endl; 
}

void Actor::SwapWeapon()
{
	std::cout << "Swap weapon!" << std::endl; 
}

void Actor::LurchIneffectively()
{
	std::cout << "Lurch ineffectively!" << std::endl; 
}
