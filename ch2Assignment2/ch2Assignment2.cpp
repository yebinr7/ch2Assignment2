#include <iostream>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "Cow.h"	
//�ʼ����� -> ��������

int main(void)
{
	Animal* bbobbi = new Dog();
	Animal* nabi = new Cat();
	Animal* hanwoo = new Cow();

	Animal* animalArray[3] = { bbobbi,nabi,hanwoo };

	for (int i = 0; i < 3; i++)
	{
		//�����Լ��� �������� �Լ� ������.->������ ���� 
		(*(animalArray[i])).makeSound();
		//animalArray[i]->makeSound();
	}
}