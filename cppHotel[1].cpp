#include <iostream>
using namespace std;
//using variables
string firstName,lastName,address;
int phoneNumber,numberofNights,numberofGuests,roomtype,roomPrice,priceperDay;
float amttoPay;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	void input()
	{
		cout<<"\n\n\t\t ________________________ WELCOME TO ADONES HOTEL MANAGEMENT CORPORATION _____________________________";
			cout<<"\n\n\t\t AVALIABLE ROOMS : ";
			cout<<"\n\n\t\t ROOM TYPE \t\t\t\t DESCRIPTION \t\t\t PRICE PER DAY ";
	    	cout<<"\n\n\t\t 1. SINGLE     \t\t\t\t ONE BED  \t\t\t GHC 599 ";
	    	cout<<"\n\n\t\t 2. DOUBLE     \t\t\t\t TWO BEDS  \t\t\t GHC 799 ";
	    	cout<<"\n\n\t\t 3. QUEEN     \t\t\t\t QUEEN AND SIZE BED  \t\t GHC 1000 ";
	    	cout<<"\n\n\t\t 4. KING     \t\t\t\t KING SIZE BEDS  \t\t GHC 1300";
	    	
	    	
	    	
	    	cout<<"\n\n\t\t ____________________ BOOK YOUR ROOM ____________________";
			cout<<"\n\n\t\t \xb2\xb2\xb2 ENTER CUSTOMER FIRST NAME : ";
			cin>>firstName;
			cout<<"\n\n\t\t \xb2\xb2\xb2 ENTER CUSTOMER LAST NAME : ";
			cin>>lastName;
		cout<<"\n\n\t\t \xb2\xb2\xb2 SELECT NUMBER OF NIGHTS : ";
			cout<<"\n\n\t\t 1. (1 night stay)  ";
	     	cout<<"\n\n\t\t 2. (2 nights stay)";
	    	cout<<"\n\n\t\t 3. (3 nights stay)";
	    	cout<<"\n\n\t\t 4. (4 nights stay) ";
	    	cin>>numberofNights;
			cout<<"\n\n\t\t \xb2\xb2\xb2 ADDRESS : ";
			cin>>address;
		}
			
			
			
			
			
			

int main(int argc, char** argv) {
	input();

	
	
	return 0;
}
