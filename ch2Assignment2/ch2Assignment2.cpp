#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "Cow.h"	
#include "Zoo.h"
//�ʼ����� -> ��������




// ���� ������ �����ϴ� �Լ�
// - 0, 1, 2 �� �ϳ��� ������ �����Ͽ� ���� Dog, Cat, Cow ��ü �� �ϳ��� �������� �����մϴ�.
// - ������ ��ü�� Animal Ÿ���� �����ͷ� ��ȯ�˴ϴ�.
// - �Է� �Ű�����: ����
// - ��ȯ��: Animal* (������ ���� ��ü�� ������)
Animal* createRandomAnimal();

int main(void)
{
	/*Animal* bbobbi = new Dog();
	Animal* nabi = new Cat();
	Animal* hanwoo = new Cow();*/

	Zoo* zoo = new Zoo();//�����Ҵ�, �����Ҵ� ���� �ʿ�
	
	
	for (int i = 0; i < 11; i++)
		zoo->addAnimal(createRandomAnimal());	


	zoo->performActions();
	
	

	
}



Animal* createRandomAnimal()
{
	//���� ���� 0,1,2
	
	/*
	�ڵ忡�� srand(time(0));�� �Լ� ������ ȣ���ϱ� ������ �Ź� ȣ��� ������ ���� �õ带 ���� �����մϴ�. 
	������, ª�� �ð� ����(Ư�� 1�� �̸�)���� 
	�Լ��� ���� �� ȣ��Ǹ� ������ �õ� ���� �����ǰ� ��������� ������ ������ �����մϴ�.
	*/

	//srand(time(0));

	//rand()�� ������ ���� ���
	int randomNum = rand() % 3; //������ 0,1,2 �ۿ� �Ȼ����.
	
	switch (randomNum)
	{
		case 0:
			return new Dog();
		break;
		case 1:
			return new Cat();
		break;	
		case 2:	
			return new Cow();
		break;
		
	}
	
	return nullptr;
}
