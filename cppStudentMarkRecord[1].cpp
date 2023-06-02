#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;
string username,password,fname[100],lname[100],id[100];
int i=0,numtoProcess,englishScore[100],mathsScore[100],socialScore[100],scienceScore[100],ghananianlangScore[100];
int totalScore[100];
float avgScore[100];	
	
	
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void login()
{      tryAgain:
		cout<<"\n\n\t\t\t\t   \xb2\xb2\xb2\xb2\xb2\xb2  LOGIN  STUDENT RESULTS PORTAL \xb2\xb2\xb2\xb2\xb2\xb2 ";
	    
	    cout<<"\n\n\t\t  \xb2\xb2\xb2\xb2\xb2\xb2 Enter username : ";
	    cin>>username;
	    
	    cout<<"\n\n\t\t   \xb2\xb2\xb2\xb2\xb2\xb2 Enter Password : ";
	    cin>>password;
	    
	    if(username != "patrick" || password != "0011")
	    {
	     system("color 47");
	     cout<<"\n\n\t\t Incorrect username and password ";	
	     Sleep(2000);
	     system("cls");
	     Sleep(1000);
	     goto tryAgain; 
		}
		else
		{
		 Sleep(2000);
		 system("cls");
		 system("color 27");
		 cout<<"\n\n\t\t WELCOME "<<username;
		 cout<<"\n\n\t\t Please wait while system loads ";	
		 cout<<".";
		 Sleep(2000);
		 cout<<"..";
		 Sleep(3000);
		 cout<<".....";
		system("color 27");
		 system("cls");
		 system("color 1f");
		 
		 		
		}
}


void studentsReqiurement()

{
	cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2 Enter number of students to process    : ";
    cin>>numtoProcess;
    
    for (i=0;i<numtoProcess;i++)
    
    {  	cout<<"\n\n\t\t\t\t\t STUDENT DETAILS     ";  
    	cout<<"\n\t\t _______________________________________________________    ";
	    cin.sync();
    	cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2 Enter student Name  : ";
    	getline(cin,fname[i]);
    	
    
    	cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2 Enter student ID          : ";
    	getline(cin,id[i]);
    	
    
    	
    	cout<<"\n\n\t\t RECORD EXAMS MARK   ";
    		cout<<"\n\t\t _______________________________________________________    ";
    	
    	cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2 Enter English Marks            : ";
    	cin>>englishScore[i];
    	cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2 Enter Maths Marks              : ";
    	cin>>mathsScore[i];
    	cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2 Enter Science Marks            : ";
    	cin>>scienceScore[i];
    	cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2 Enter Social Marks             : ";
    	cin>>socialScore[i];
    	cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2 Enter Ghananian Lang Marks     : ";
    	cin>>ghananianlangScore[i];
     cout<<"n\t\t\t _______________________________________________________ ";	
    
    	
    	
	}
}

	
	
void processResults()

{     cout<<"\n\n\t\t\t Please wait for final RESULTS...";
     Sleep(2000);
	 
	 for (i=0;i<numtoProcess;i++)
	 {totalScore[i] = englishScore[i] + mathsScore[i] + socialScore[i] + scienceScore[i] + ghananianlangScore[i]; 
	 avgScore[i] = totalScore[i]/5;
	 	
	 }
}
void output()


{   system("cls");
	system("color 27");
     cout<<"\n\n\t\t\t\t   \xb2\xb2\xb2\xb2\xb2\xb2  STUDENT MARK RECORD   \xb2\xb2\xb2\xb2\xb2\xb2 ";
	cout<<"\n\t\t\t ________________________________________________";
	


	for (i=0;i<numtoProcess;i++)
	{
		cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2 Student Name        : "<<fname[i];
		cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2  Student ID         : "<<id[i];
		cout<<"\n\n\t\t  STUDENT SCORE     ";
		cout<<"\n\t\t\t _______________________________________________ ";
		cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2 English score             : "<<englishScore[i];
		cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2 Maths score               : "<<mathsScore[i];		
		cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2 Social score              : "<<socialScore[i];
		cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2 Science score             : "<<scienceScore[i];
		cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2 Ghananian Language score  : "<<ghananianlangScore[i];
	
		cout<<"\n\t\t\t ________________________________________________";
		
		
	   cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2 TOTAL ACCUMULATED MARKS              : "<<totalScore[i];
	  cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2  AVERAGE MARKS                        : "<<fixed<<setprecision(2)<<avgScore[i];
	  	
	}
	
	
	 

}
int main(int argc, char** argv) {
	login();
	studentsReqiurement();
	processResults();
	output();
	return 0;
}
