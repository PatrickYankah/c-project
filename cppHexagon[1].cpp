#include <iostream>
using namespace std;
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double area;
double Hexagonarea(double s)

{    double area=3*(sqrt(3)*s*s)/2;

	return area;
	
	
}
int main(int argc, char** argv) {
	double side;
	cout<<"\n\n\t\t Enter side length : ";
	cin>>side;
		cout<<"\n\n\t\t Area of the hexagon : "<<Hexagonarea(side);
	return 0;
}
