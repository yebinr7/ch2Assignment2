#include <iostream>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "Cow.h"	
//필수과제 -> 도전과제

int main(void)
{
	Animal* bbobbi = new Dog();
	Animal* nabi = new Cat();
	Animal* hanwoo = new Cow();

	Animal* animalArray[3] = { bbobbi,nabi,hanwoo };

	for (int i = 0; i < 3; i++)
	{
		//가상함수라서 실형식의 함수 따른다.->다형성 제공 
		(*(animalArray[i])).makeSound();
		//animalArray[i]->makeSound();
	}
}