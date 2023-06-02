#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//declearing and initializing an array 
	//	int numbers[10]={1,2,3,4,5,6,7,8,9,10};
	//	string names[5]={"kofi","derrick","ama","pen","house"};
	//	float values[3]={1.2,5.3,6.6};
	//	string cars[7]={"toyota","accord","civic","benz","range rover sports","camry","vitz"};
	
	
	
		//accesssing an array elements
		//	names[1]="dog";
		//	cout<<"\n\n\t\t "<<names[1];
	//cout<<"\n\n\t\t "<<cars[5];
		
//		string firstName[10];
//	    cout<<"\n\n\t\t Enter student first Name : ";	
//		cin>>firstName[0];
//		
//		
//		cout<<"\n\n\t\t Enter student first Name : ";	
//		cin>>firstName[1];
//		
//		
//		cout<<"\n\n\t\t Enter student first Name : ";	
//		cin>>firstName[2];
//		
//		
//		cout<<"\n\n\t\t __________________________________________________";
//		
//		cout<<"\n\n\t\t "<<firstName[0];
//		cout<<"\n\n\t\t "<<firstName[1];
//		cout<<"\n\n\t\t "<<firstName[2];
//		
//string names[5]={"kofi","derrick","ama","pen","house"};
//	int i =0;
//	
//	for(i=0;i<5;i++)
//		{
//		  cout<<"\n\n\t\t "<< names[i];
//		}
//		string names[5]={"kofi","derrick","ama","pen","house"};
//		int i =0;
//      while(i<5)
//     {      
//		cout<<"\n\n\t\t "<<names[i];
//		i++;
//	}


  string firstName[100];
  int i=0;
   int numtoProcess;
//	cout<<"\n\n\t\t enter number to process : ";
//	cin>>numtoProcess;
//    //input
//    
//    for (i=0;i<numtoProcess;i++)
//    {
//     cout<<"\n\n\t\t Enter student first Name : ";	
//	cin>>firstName[i];	
//	}
//	
//	//output
//for (i=0;i<numtoProcess;i++)
//{
//cout<<"\n\n\t\t "<<firstName[i];
//}

do
{
	cout<<"\n\n\t\t Enter student first Name : ";	
	cin>>firstName[i];	
	cout<<"\n\n\t\t enter 1 to continue : ";
	cin>>numtoProcess;
}
	while(numtoProcess==1);
	
	return 0;
}
