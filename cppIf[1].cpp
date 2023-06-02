#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int age;
	cout<<"\n\n\t\t ==================== AGE CHECKER ====================";
	cout<<"\n\n\t\t =============== ENTER YOUR AGE ";
	cin>>age;

	if(age>=18)
	{
		cout<<"\n\n\t\t You are eligible to vote";
		
	}
	else
	{
		cout<<"\n\n\t\t You are NOT eligible to vote";
	}
	
	
	
	if(age >=0 && age<=12)
	{
		cout<<"\n\n\t\t You are child";
	
	}
	
	
	else if(age >=13 && age<=19)
	{
		cout<<"\n\n\t\t You are a teen";
	}
	
	else if(age >=20 && age<=35) 
	{
		cout<<"\n\n\t\t You are a youth";
	}
	
		else if(age >35) 
	{
		cout<<"\n\n\t\t You are an adult";
	}
	else
	{
		cout<<"\n\n\t\t Invalid Entry";
	}
	
	
	
	return 0;
}
