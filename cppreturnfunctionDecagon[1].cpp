#include <iostream>
#include <cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double area;

double decagonArea(double s)
{    
	double area = 5*(s*s)/2*(sqrt(5)*2*sqrt(5));

	return area;
}

int main(int argc, char** argv) {
double side;
	
cout<<"\n\n\t\t Enter raduis : ";
	cin>>side;

	
		cout<<"\n\n\t\t AREA OF decagon: "<<decagonArea(side);
	return 0;
}
