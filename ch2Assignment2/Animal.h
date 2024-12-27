#pragma once
#include <iostream>
using namespace std;
class Animal
{
public:
	Animal();

	//다형성 만들어 질 수 있기에 virtual 붙혀줘서 자식부터 삭제하고 부모도 삭제하게 만든다.
	virtual ~Animal();

	//순수가상함수 -> 인터페이스됨, 하위클래스에서 무조건 구현해야함
	virtual void makeSound() = 0;  


private:


};


