#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "Cow.h"	
#include "Zoo.h"
//필수과제 -> 도전과제




// 랜덤 동물을 생성하는 함수
// - 0, 1, 2 중 하나의 난수를 생성하여 각각 Dog, Cat, Cow 객체 중 하나를 동적으로 생성합니다.
// - 생성된 객체는 Animal 타입의 포인터로 반환됩니다.
// - 입력 매개변수: 없음
// - 반환값: Animal* (생성된 동물 객체의 포인터)
Animal* createRandomAnimal();

int main(void)
{
	/*Animal* bbobbi = new Dog();
	Animal* nabi = new Cat();
	Animal* hanwoo = new Cow();*/

	Zoo* zoo = new Zoo();//동적할당, 동적할당 해제 필요
	
	
	for (int i = 0; i < 11; i++)
		zoo->addAnimal(createRandomAnimal());	


	zoo->performActions();
	
	

	
}



Animal* createRandomAnimal()
{
	//난수 생성 0,1,2
	
	/*
	코드에서 srand(time(0));를 함수 내에서 호출하기 때문에 매번 호출될 때마다 난수 시드를 새로 설정합니다. 
	하지만, 짧은 시간 간격(특히 1초 미만)으로 
	함수가 여러 번 호출되면 동일한 시드 값이 설정되고 결과적으로 동일한 난수를 생성합니다.
	*/

	//srand(time(0));

	//rand()로 생성된 난수 사용
	int randomNum = rand() % 3; //나머지 0,1,2 밖에 안생긴다.
	
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
