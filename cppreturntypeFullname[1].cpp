#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
string fName,lName;
string name(string fName,string lName)
{
return (fName + lName);
}



int main(int argc, char** argv) {
	
		cout<<"\n\n\t\t enter first name : ";
		cin>>fName;
		cout<<"\n\n\t\t enter last name : ";
		cin>>lName;
		cout<<"\n\n\t\t my name is "<<fName<<" "<<lName;
	 name (fName,lName);
	
	
	
	return 0;
}
