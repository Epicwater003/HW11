/*
ДЗ 11

Тема: множественное наследование

*/

#include <iostream>
class IPart {
};

class IHead: virtual IPart {
public:
	virtual void doSound() = 0;
	const float weight = 1;
};
class IBody: virtual IPart {
public:
	virtual void doMove() = 0;
	const float weight = 2;
};
class Cat : public IHead, public IPart {
public:
	void doSound() { std::cout << "Meow!" << std::endl; }
	void doMove() { std::cout << "*sounds of a broken vase*" << std::endl; }
};
class CheshireCat : public IHead {
	void doSound() { std::cout << "Confidence and recklessness are two sides of the same coin" << std::endl; }
};

int main(){

	
}