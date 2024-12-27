#include "Zoo.h"
#include "Dog.h"
#include "Cat.h"
#include "Cow.h"
Zoo::Zoo()
	:animalCount(0)//0마리로 이니셜라이져
{
}

Zoo::~Zoo()
{
	//동적할당 해제
	
		delete[] animals;
	
}

void Zoo::addAnimal(Animal* animal)
{
	if (animalCount < 10)
	{
		animals[animalCount] = animal;
		//추가하고 동물개수 늘려주기
		animalCount++;
	}
	else
	{
		std::cout << "동물원이 꽉찼습니다...\n";
		return;
	}
}

void Zoo::performActions()
{
	
	for (int i = 0; i < animalCount; i++)
	{
		//실형식으로 각자객체의 함수 실행 
		animals[i]->makeSound();
	}
}

