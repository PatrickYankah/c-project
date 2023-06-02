#include <iostream>
#include <cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double area;

double nanagonArea(double r)
{    
	double b = 0.054856;
	area = b*r*r;
	return area;
}

int main(int argc, char** argv) {
double raduis;
	
cout<<"\n\n\t\t Enter raduis : ";
	cin>>raduis;

	
		cout<<"\n\n\t\t AREA OF CIRCLE: "<<nanagonArea(raduis);
	return 0;
}
