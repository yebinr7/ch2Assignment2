#pragma once
#include "Animal.h"
class Cow :
    public Animal
{
public:
	Cow();
	virtual ~Cow();


	virtual void makeSound() override;

private:

};

