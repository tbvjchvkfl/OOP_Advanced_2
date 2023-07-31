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
	int mProtected;		// private와 기본적으로 속성은 같지만, 자식들에게도 허용됨. (자식 클래스 내부에서 사용 가능)
	
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