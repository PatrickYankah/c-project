#include <iostream>
using namespace std;
string fName,lName,address,GHC,roomName,attendantName;
int pNumber,numberofGuests,numberofNights,roomType;
int priceperday;
double totalcostofReservation,charge;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void input()
	{     cout<<"\n\n\t\t\t   HOTEL APPLICATION "; 
		cout<<"\n\n\t\t ________________________ ROOM RESERVATION _____________________________";
		
			cout<<"\n\n\t\t ROOM TYPE                DESCRIPTION                   PRICE PER DAY ";
	    	cout<<"\n\n\t\t 1. SINGLE                ONE BED                        GHC 599 ";
	    	cout<<"\n\n\t\t 2. DOUBLE                TWO BEDS                       GHC 799 ";
	    	cout<<"\n\n\t\t 3. QUEEN                 QUEEN AND SIZE BED             GHC 1000 ";
	    	cout<<"\n\n\t\t 4. KING                  KING SIZE BEDS                 GHC 1300";
	    cout<<"\n\n\t\t \xb2\xb2\xb2  Enter Room type          : ";
	    	cin>>roomType;	
		
	        
			
			cout<<"\n\n\t\t \xb2\xb2\xb2 Enter customer first name : ";
			cin>>fName;
	    	cout<<"\n\n\t\t \xb2\xb2\xb2 Enter customer last name  : ";
	    	cin>>lName;
	    	cout<<"\n\n\t\t \xb2\xb2\xb2 Enter address             : ";
	    	cin>>address;
	    	cout<<"\n\n\t\t \xb2\xb2\xb2 Enter phone number        : ";
	    	cin>>pNumber;
	    		cout<<"\n\n\t\t \xb2\xb2\xb2 Number of guests           ";
	    	cin>>numberofGuests;
	    	cout<<"\n\n\t\t \xb2\xb2\xb2 Number of Nights         :  ";
	        cin>>numberofNights;
	    
	    	
	    	
	    	}
	    	
	    void process()
	    {
		
		    if(numberofGuests>0 && numberofGuests<=2)
		{
		
			if(roomType==1 )
	    	{      roomType==1;
					priceperday=599;
					roomName="single bedroom";
					attendantName="MR FRANK KUFFOUR";
			        charge =0;
	    		totalcostofReservation=numberofNights*priceperday;
			}
			
		
			 
			else if( roomType==2)
	    	{    charge =0;
			  roomType==2;
					priceperday=799;
			        roomName="double bedroom";
			        	attendantName="MR FRANK KUFFOUR";
	    		totalcostofReservation=numberofNights*priceperday;
			}
			 
			else if( roomType==3 )
	    	{ 
			     charge =0;
			     roomType==3;
					priceperday=1000;
					roomName="queen bedroom";
						attendantName="MR FRANK KUFFOUR";
			
	    		totalcostofReservation=numberofNights*priceperday;
			}
			
		else if( roomType==4 )
	    	
	    	{     charge =0;
			      roomType==4;
					priceperday=1300;
			       roomName="king size bedroom";
				attendantName="MR FRANK KUFFOUR";
	    		totalcostofReservation=numberofNights*priceperday;
			}
		}
		
		else if(numberofGuests>2)	        
    {
				      if (roomType==1 )
			        { numberofGuests>2;
				       roomType==1;
				     	priceperday=599;
				    	roomName="single bedroom";
				    	attendantName="MR FRANK KUFFOUR";
			            charge =100;
	    		        totalcostofReservation=(numberofNights*priceperday)+charge;
			        }
		           else if( roomType==2)
	    	       {  
				      numberofNights=2;
				      numberofGuests>2;
			          roomType==2;
					  priceperday=799;
			          roomName="double bedroom";
			        	attendantName="MR FRANK KUFFOUR";
			        	 charge =100;
	    		totalcostofReservation=(numberofNights*priceperday) +charge;
			        }
			else if( roomType==3)
			{    
			         numberofGuests>3;
			         roomType==3;
					priceperday=1000;
					roomName="queen bedroom";
						attendantName="MR FRANK KUFFOUR";
						 charge =100;
	    		totalcostofReservation=(numberofNights*priceperday)+charge;
			
	    		
			}
			
		    else if( roomType==4)
	    	{
			numberofGuests>2;
			      roomType==4;
					priceperday=599;
			roomName="king size bedroom";
				attendantName="MR FRANK KUFFOUR";
	    			 charge =100;
	    		totalcostofReservation=(numberofNights*priceperday)+charge;
			}
			
}
}

	
	
		
		
	
	    
	    
		
		
		void output()
		{
		cout<<"\n\n\t\t __________________________________GUEST ROOM DETAILS _______________________________";
		cout<<"\n\n\t\t NAME OF ATTENDANT : "<<attendantName;
		cout<<"\n\n\t\t GUEST NAME : "<<fName<<" "<<lName;
		cout<<"\n\n\t\t GUEST ADDRESS : "<<address;
		cout<<"\n\n\t\t GUEST PHONE NUMBER : "<<pNumber;
		cout<<"\n\n\t\t ROOM TYPE SELECTED : "<<roomType;
		cout<<"\n\n\t\t NUMBER OF NIGHTS : "<<numberofNights;
		cout<<"\n\n\t\t COST OF ROOM PER DAY : GHC "<<priceperday;
		cout<<"\n\n\t\t NUMBER OF NIGHTS : "<<numberofNights;
		cout<<"\n\n\t\t CHARGE : "<<charge;
		cout<<"\n\n\t\t TOTAL COST OF ROOM :GHC "<< (numberofNights*priceperday)+charge ;
		cout<<"\n\n\t\t ROOM ASSIGNED TO :"<< roomName ;
		}
int main(int argc, char** argv) {
	input();
 process();
 output();
	return 0;
}
