#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class human
{
	 public:
     string firstName,lastName,complexion,address;
     int age;
     
     void displayDetails()
     {
     	cout<<"\n\n\t\t name : "<<firstName<<" "<<lastName;
     	cout<<"\n\n\t\t complexion : "<<complexion;
     	cout<<"\n\n\t\t address : "<<address;
     	cout<<"\n\n\t\t age : "<<age;
	 }
	 
	 
                	 
};

class Car
{  public:
    string carName,model,color,year;	


string	mycar1(string carName,string model,string color,string year	)
{
	return carName+" "+model+" "+year+" "+color;
}
};




int main(int argc, char** argv) {
	
	human person1;//(instance name)
	person1.firstName = "derrick";
	person1.lastName = "opoku";
	person1.complexion = "fair";
	person1.age=19;
	person1.address ="kasoa";
	
		
	human person2;//(instance name)
	person2.firstName = "yaw";
	person2.lastName = "annan";
	person2.complexion = "dark";
	person2.age=21;
	person2.address ="new town";
	
	Car mycar1;//(instance name)
	mycar1.carName = "toyota";
	mycar1.model = "camry spider";
	mycar1.year = "2019";
	mycar1.color = "blue";
	
cout<<"\n\n\t"<<mycar1.mycar1(mycar1.carName,mycar1.model,mycar1.year,mycar1.color);
	
//	cout<<"\n\n\t\t\ My name is "<<	person1.firstName<<" "<<person1.lastName;
	
//	cout<<"\n\n\t\t\ My name is "<<	person2.firstName<<" "<<person2.lastName;
//person1.displayDetails();
//mycar1.displaycarDetails();
	return 0;
}
