#include <iostream>
using namespace std ;
// 
// //parent classs/base class/super classs
// class School {
// 	public:
// 		 string schoolName="IPMC";
// 		
// };
// //child class/derived/supeer
// //inheritance
// class IpmcKasoa : public School{
// 	
// };
//class Employee{
//	public :
//		int hoursWorked;
//		float hourlyWage = 100;
//		
//};
//
//class Programmer:public Employee{
//	public:
//		float bonus = 2000;
//};
//
//
//class Graphicdesign :public Employee{
//	public:
//		float tax =0.0275;
//			float bonus = 3000;
//			float taxAmt;

//
class A {
	public :
		int x =10;
};

class B {
	public :
		int y =10;
};
class C:public A,public B{
	public :
	
};
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) { 
//IpmcKasoa ik = IpmcKasoa();
//cout<<ik.schoolName;

//Programmer prog = Programmer();
//prog.hoursWorked = 5;
////cout<<"\n\n\t\t Hourly Wage : "<<prog.hourlyWage;
////cout<<"\n\n\t\t Hourly Worked  : "<<prog.hoursWorked;
////cout<<"\n\n\t\t bonus  : "<<prog.bonus;
////cout<<"\n\n\t\t salary   : "<<((prog.hourlyWage * prog.hoursWorked)+prog.bonus);
//
//
//Graphicdesign d1 =Graphicdesign();
//d1.tax = 0.0275;
//d1.bonus = 3000;
//d1.taxAmt = 3500*0.0275;
//cout<<"\n\n\t\t Hourly Wage    : "<<prog.hourlyWage;
//cout<<"\n\n\t\t Hourly Worked  : "<<prog.hoursWorked;
//cout<<"\n\n\t\t bonus          : "<<d1.bonus;
//cout<<"\n\n\t\t Tax amount     : "<<d1.taxAmt;
//cout<<"\n\n\t\t salary         : "<<((prog.hourlyWage * prog.hoursWorked)+d1.bonus) - d1.taxAmt;
C c =C();
cout<<(c.x+ c.y);
	return 0;
}

