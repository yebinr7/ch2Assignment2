#pragma once
#include "Animal.h"
class Cat :
    public Animal
{
public:
	Cat();
	virtual ~Cat();

	//다형성 사용
	virtual void makeSound() override;

private:
	

};

