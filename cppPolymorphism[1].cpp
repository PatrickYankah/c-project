#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//class Animal {
//	   public:
//	   	void animalSound()
//	   	{  cout<<"\n\n\t\t every animal makes a sound ";
//	
//		   }
//};
//
//class Dog:public Animal{
//	public:
//		void animalSound()
//		{
//			cout<<"\n\n\t\t  Dogs bark ";
//		}
//};
//
//class lion:public Animal{
//	public:
//		void animalSound()
//		{
//			cout<<"\n\n\t\t  lion roar ";
//		}
//};

class Vehicle{
	public:
		string speed;
		void move()
		{
			cout<<"\n\n\t\t  every car moves ";
		}
};


class Toyota:public Vehicle{
	public:
		void move()
		{
			cout<<"\n\n\t\t toyata moves at a speed of "<<speed<<"km/hr ";
		}
};

class Benz:public Vehicle{
	public:
		void move()
		{
			cout<<"\n\n\t\t Benz moves at a speed of "<<speed<<"km/hr ";
		}
};


int main(int argc, char** argv) {
//	
//	Animal animal = Animal();
//	animal.animalSound();
//	
//	Dog d = Dog();
//	d.animalSound();

//Toyota t = Toyota();
//t.speed = "2000";
//t.move();

Benz b = Benz();
b.speed = "5000";
b.move();
	return 0;
}
