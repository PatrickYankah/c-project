#include <iostream>
#include <cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double area;

double circleArea(double r)
{    
	double pi = 3.142;
	area = pi*r*r;
	return area;
}

int main(int argc, char** argv) {
double raduis;
	
cout<<"\n\n\t\t Enter Raduis : ";
	cin>>raduis;

	
		cout<<"\n\t\t\t AREA OF CIRCLE: "<<circleArea(raduis);
	return 0;
}
