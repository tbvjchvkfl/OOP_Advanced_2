#include <iostream>
#include "Cat.h"
#include"Dog.h"


class MyParent
{
public:
	int mPublic;
private:
	int mPrivate;
protected:
	int mProtected;		// private�� �⺻������ �Ӽ��� ������, �ڽĵ鿡�Ե� ����. (�ڽ� Ŭ���� ���ο��� ��� ����)
	
};

class MyChild : public MyParent
{
	void DoSomething()
	{
		this->mPublic;
		this->mProtected;
	}
};

int main()
{
	Cat nabi;

	nabi.SetAge(2);
	nabi.SetBreed(Cat::BREED::TURKISHANGORA);
	nabi.Sound();
	nabi.Grooming();

	Dog Darong;

	Darong.SetAge(5);
	Darong.SetBreed(Dog::BREED::SHITZU);
	Darong.Sound();
	Darong.Hawling();

}