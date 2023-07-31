#pragma once
#include "Animal.h"
class Dog : public Animal
{
public:
	enum BREED
	{
		SHITZU,
		JINDOTGAE,
		HURSKY
	};

private:
	BREED mbreed;

public:
	Dog();
	~Dog();
	Dog::BREED GetBreed() const;
	void SetBreed(Dog::BREED breed);

	void Hawling();
};

