
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//using variables
 string name, address,course;
void registerStudent(string name,string address,string course)
{
cout<<"\n\n\t\t\ Student name : "<<name;
cout<<"\n\n\t\t\ Student Address: "<<address;
cout<<"\n\n\t\t\  Student course : "<<course;
}


int main(int argc, char** argv) {
cout<<"\n\n\t\t\ Student name : "<<name;
cin>>name;
cout<<"\n\n\t\t\ Student Address: "<<address;
cin>>address;
cout<<"\n\n\t\t\  Student course : "<<course;
cin>>course;
registerStudent( name, address, course);
//void registerStudent("opo","mallam","software");
	return 0;
}
