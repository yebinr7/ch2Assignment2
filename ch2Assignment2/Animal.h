#pragma once
#include <iostream>
using namespace std;
class Animal
{
public:
	Animal();

	//������ ����� �� �� �ֱ⿡ virtual �����༭ �ڽĺ��� �����ϰ� �θ� �����ϰ� �����.
	virtual ~Animal();

	//���������Լ� -> �������̽���, ����Ŭ�������� ������ �����ؾ���
	virtual void makeSound() = 0;  


private:


};


