#pragma once

class Actor
{
public:
	Actor() {};
	~Actor() {};

	virtual void Jump();
	virtual void Fire();
	virtual void SwapWeapon();
	virtual void LurchIneffectively();
};

