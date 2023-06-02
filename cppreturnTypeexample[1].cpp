#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double squareArea(double l)
{
	double area = l*l;
	return area;
}

int main(int argc, char** argv) {
double length;
	
cout<<"\n\n\t\t Enter length : ";
	cin>>length;
	
		cout<<"\n\t\t\t AREA : "<<squareArea(length);
	return 0;
}
