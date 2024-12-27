#include "Zoo.h"
#include "Dog.h"
#include "Cat.h"
#include "Cow.h"
Zoo::Zoo()
	:animalCount(0)//0������ �̴ϼȶ�����
{
}

Zoo::~Zoo()
{
	//�����Ҵ� ����
	
		delete[] animals;
	
}

void Zoo::addAnimal(Animal* animal)
{
	if (animalCount < 10)
	{
		animals[animalCount] = animal;
		//�߰��ϰ� �������� �÷��ֱ�
		animalCount++;
	}
	else
	{
		std::cout << "�������� ��á���ϴ�...\n";
		return;
	}
}

void Zoo::performActions()
{
	
	for (int i = 0; i < animalCount; i++)
	{
		//���������� ���ڰ�ü�� �Լ� ���� 
		animals[i]->makeSound();
	}
}

