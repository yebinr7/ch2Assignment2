#pragma once
#include "Animal.h"
class Dog
	:public Animal
{
public:
	Dog();
	virtual ~Dog();


	//다형성 사용
	virtual void makeSound() override;


private:


};

