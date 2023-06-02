#include <iostream>
#include <windows.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	char insurance;
	selectInsurance:
cout<<"\n\n\t\t ---------- INSURANCE TYPES --------------- ";
cout<<"\n\n\t\t  1.INSURANCE TYPE U  ";
cout<<"\n\n\t\t  2.INSURANCE TYPE A  ";
cout<<"\n\n\t\t  3.INSURANCE TYPE M ";
cout<<"\n\n\t\t  4.INSURANCE TYPE B   ";
cout<<"\n\n\t\t  SELECT INSURANCE TYPE : ";
cin>>insurance;

switch(insurance)
{
	case 'u' :
	case 'U' :
		cout<<"\n\n\t\t \xb2\xb2\xb2 insurance not avaliable";
		
	break;
	
	case 'a' :
	case 'A' :
		cout<<"\n\n\t\t \xb2\xb2\xb2 insurance is double";
		
	break;
	
	case 'm' :
	case 'M' :
		cout<<"\n\n\t\t \xb2\xb2\xb2 insurance is normal";
		
	break;
	
	case 'b' :
	case 'B' :
		cout<<"\n\n\t\t \xb2\xb2\xb2 insurance is medically independent";
		
	break;
	default: "\n\n\t\t \xb2\xb2\xb2 INVALID INSURANCE";
	Sleep(3000);
	system("cls");
	goto selectInsurance;
		
	break;
}
	return 0;
}
