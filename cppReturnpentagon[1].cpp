#include <iostream>
using namespace std;
#include <cmath>

double area;
double pentagonArea(double p,double s)
{   area=0.5*p*s;
return area;
	
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double perimeter,apothem;
cout<<"\n\n\t\t\ Enter perimeter : ";
cin>>perimeter;
cout<<"\n\n\t\t\ Enter apothem : ";	
cin>>apothem;
cout<<"\n\n\t\t\ AREA OF PENTAGON : "<<pentagonArea(perimeter,apothem);

	return 0;
}
