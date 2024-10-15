#include <iostream>

using namespace std;

class Animal
{
public:
	Animal(int startingPosition);
	void move();
	int getX();
private:
	int x=0;

protected:
	int moveAmount;

};


class Turtle:public Animal
{
public:
	Turtle(int startignPosition);
};


class Cat : public Animal
{
public:
	Cat(int startignPosition);
};



int main() {

	Cat myCat(10);
	Turtle myTurtle(20);

	cout << myCat.getX() << endl;
	cout << myTurtle.getX() << endl;
	myCat.move();
	myCat.move();
	myTurtle.move();
	myTurtle.move();
	myTurtle.move();
	cout << myCat.getX() << endl;
	cout << myTurtle.getX() << endl;


	return 1;
}


Animal::Animal(int startingPosition) {
	moveAmount = 1;
	x = startingPosition;
	cout << "Constructor animal" << endl;
	/*x = startingPosition;*/
}
void Animal::move()
{
	x += moveAmount;
}
int Animal::getX()
{
	return x;
}



Turtle::Turtle(int startignPosition) :Animal(startignPosition)
{
	moveAmount = 5;
	cout << "Constuctor Turtle" << endl;
}



Cat::Cat(int startignPosition) :Animal(startignPosition)
{
	moveAmount = 10;
	cout << "Constuctor Cat" << endl;
}