#pragma once

#include <iostream>

class Command
{
public:
	virtual ~Command() {}
	virtual void execute() = 0;
};

class JumpCommand : public Command
{
public:
	virtual void execute() override { jump(); };

private:
	void jump() { std::cout << "Jump!" << std::endl; };
};

class FireCommand : public Command
{
public:
	virtual void execute() override { fireGun(); };

private:
	void fireGun() { std::cout << "Fire gun!" << std::endl; };
};
class SwapWeaponCommand : public Command
{
public:
	virtual void execute() override { swapWeapon(); };

private:
	void swapWeapon() { std::cout << "Swap weapon!" << std::endl; };
};
class LurchIneffectivelyCommand : public Command
{
public:
	virtual void execute() override { lurchIneffectively(); };

private:
	void lurchIneffectively() { std::cout << "Lurch ineffectively!" << std::endl; };
};
