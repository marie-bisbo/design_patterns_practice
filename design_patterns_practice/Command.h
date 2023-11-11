#pragma once

#include <iostream>
#include "Actor.h"

class Command
{
public:
	virtual ~Command() {}
	virtual void execute(Actor& actor) = 0;
};

class JumpCommand : public Command
{
public:
	virtual void execute(Actor& actor) override { actor.Jump(); };
};

class FireCommand : public Command
{
public:
	virtual void execute(Actor& actor) override { actor.Fire(); };
};
class SwapWeaponCommand : public Command
{
public:
	virtual void execute(Actor& actor) override { actor.SwapWeapon(); };
};
class LurchIneffectivelyCommand : public Command
{
public:
	virtual void execute(Actor& actor) override { actor.LurchIneffectively(); };
};
