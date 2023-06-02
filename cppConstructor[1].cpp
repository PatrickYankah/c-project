#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class School{
	
	public:
		
		string name;string course;
		
		School(string a,string b)
		{
			name=a;
			course =b;
			
		}
};

class Myself{
	public:
	string name,color,height, school;
		int age;
	
		Myself(string a,string b,string c,string d,int e)
		{
			name =a;
			color =b;
			height =c;
			school =d;
			age =e;
			
			
		}
	
};


class Employee
{
	public:
	string name;
	int currentYear,yearofBirth,age=0;
	
	Employee(string a ,int b,int c ,int d)
	{
			name = a;
		currentYear= b;
		yearofBirth=c;
		age=d;
	}
	
	
	void input()
{
		
	cout<<"\n\n\t\t Enter your name:";
cin>>name;

cout<<"\n\n\t\t Enter year of birth :";
cin>>yearofBirth;
cout<<"\n\n\t\t Enter current year :";
cin>>currentYear;	
	
	
}
void process()
{
	age = currentYear - yearofBirth;
}
void output()
{
	system("cls");
	cout<<"\n\n\t\t name "<<name;
    cout<<"\n\n\t\t year of birth "<<yearofBirth;
    cout<<"\n\n\t\t current year "<<currentYear;
    cout<<"\n\n\t\t age "<<age;
	}	
	
};



//	cout<<"\n\n\t\t Enter your name:";
//	cin>>name;
//	
//	cout<<"\n\n\t\t Enter your color:";
//	cin>>color;
//	cout<<"\n\n\t\t Enter your school:";
//	cin>>school;
//	cout<<"\n\n\t\t Enter your height :";
//	cin>>height;
//	cout<<"\n\n\t\t Enter your age:";
//	cin>>age;






 
//	cout<<"\n\n\t\t  I am "<<color;
//	cout<<"\n\n\t\t  I am "<<school;
//	cout<<"\n\n\t\t  I am "<<height;
//	cout<<"\n\n\t\t  I am "<<age;
//}
int main(int argc, char** argv) {
//	School a1 = 	School("derrick" ,"software engineering");
//	cout<<a1.name;
//	
//	cout<<a1.course;
//
//
////	animal.name = "dog";
////	 cout<<animal.name;
//	string name,color,height,school;
//		int age;
//Myself ms1 = Myself( name,color,height,string school,age)
//ms1.input();
//ms1.output();
string name;

int year,birth,age;
Employee d2 = Employee (name,year,birth,age);
d2.input();
d2.process();
d2.output();
	return 0;
}
