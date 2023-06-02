#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	string names [3][3]={"kofi","kite","dpg","opok","emma","wash","wert","umbref","lion"};
//	cout<<names[0][0] ;
	
	
	for(int i=0;i<3;i++)
	{
			for(int j=0;j<3;j++)
			{
				cout<<"\t "<<names[i][j];
			}
	cout<<endl;
	}
	
	
	
	return 0;
}
