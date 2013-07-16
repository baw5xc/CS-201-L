#include <iostream>
#include <string>

#include "Animal.h"
#include "Human.h"
#include "Bird.h"
#include "Dog.h"

using namespace std;


int main()
{
	//---------------------Warm-up-------------
	/*Animal animal;
	animal.Action();

	Human human;
	human.Action();

	Bird bird;
	bird.Action();

	Dog dog;
	dog.Action();*/

	//-------------------------------------------

	//-----------------Exercise 1----------------
	Animal* animal;
	Human human("human");
	animal = &human;

	animal->Action();

	Dog dog("dog");
	animal = &dog;


	// The output is different because animal is pointing to two separate objects.

	//----------------Exercise 2--------------------





	//The program doesn't compile when you try to create an object of an abstract class, which is the case
	//here. Any class that has a pure virtual function is automatically an abstract class.
	//We CAN, however, make a pointer of an abstract class because it would be pointing to something other than
	// an object of the abstract class. In this case, the animal object is pointing to the human or bird object.
	

	//-----------------Exercise 3---------------------


	Human human1("brad");
	Dog dog1("samson");

	Human* ptrH = &human1;
	Dog* ptrD = &dog1;

	//animal = dynamic_cast<Human*>(ptrH);
	//animal->Action();

	//ptrH = dynamic_cast<Animal*>(animal);
	//ptrH->Action();


	// The reason why this wouldn't compile is because you cannot convert from derived class to the base class.

	//animal = static_cast<Human*>(ptrH);
	//animal->Action();

	//ptrH = static_cast<Animal*>(animal);
	//ptrH->Action();

	// The reason why this wouldn't compile is because you cannot convert from derived class to the base class,
	// which is the same reason we couldn't use a dynamic cast.

	ptrH = reinterpret_cast<Animal*>(animal);
	ptrH->Action();
	
	// it's possible to cast from one derived class to another derived class, however it's not working here. 
	

	system("PAUSE");
	return 0;

}