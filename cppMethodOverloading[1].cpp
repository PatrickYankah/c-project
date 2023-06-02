#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float area (float length)
	{
		return length * length;
		
	}
	
		float area (float base,float height)
	{
		return base * height * 0.5 ;
		
	}
int main(int argc, char** argv) {

	   cout<<area(2);
  		cout<<endl;
		cout<<area(2,4);
	
	return 0;
}
