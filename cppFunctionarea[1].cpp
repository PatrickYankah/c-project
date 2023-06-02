#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double base,height,results;
double triangleArea(double base,double height)

{ 
    float results = 0.5*base*height;
	return  results;
}
int main(int argc, char** argv) {
	cout<<"\n\n\t\t Enter base :";
	cin>>base;
	cout<<"\n\n\t\t Enter height :";
	cin>>height;
	cout<<"\n\n\t\t area :"<<triangleArea(base,height);


	return 0;
}
