#pragma once
#include "Animal.h"
class Dog
	:public Animal
{
public:
	Dog();
	virtual ~Dog();


	//������ ���
	virtual void makeSound() override;


private:


};

