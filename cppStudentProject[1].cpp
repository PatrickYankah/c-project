#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string studentFname,studentLname;
	string course="Software Engineering";
	
	int sadScore,sqlScore,htmlScore,progMethScore,cppScore,javaScore;
	int totalScore=0;
	float avgScore=0;
	
	
	
	//input process
	cout<<"\n\n\t\t ======== WELCOME TO STUDENT SCORE PORTAL============";
	cout<<"\n\n\t\t ======== Enter student first name ";
	cin>>studentFname;

	cout<<"\n\n\t\t ======== Enter student last name ";
	cin>>studentLname;
	cout<<"\n\n\t\t ______________________________________________";
		
	cout<<"\n\n\t\t ======== RECORD SCORES ==========";
	cout<<"\n\n\t\t ======== Enter SAD SCORE ";
	cin>>sadScore;
	cout<<"\n\n\t\t ======== Enter SQL SCORE ";
    cin>>sqlScore;
	cout<<"\n\n\t\t ========= Enter HTML SCORE ";
	cin>>htmlScore;
	cout<<"\n\n\t\t ========= Enter PROGRAMMING METHOD SCORE  ";
	cin>>progMethScore;
	cout<<"\n\n\t\t ========= Enter C++ SCORE  ";
	cin>>cppScore;
	cout<<"\n\n\t\t ========= Enter JAVA SCORE  ";
	cin>>javaScore;
		  
		  
//process
totalScore = sadScore + sqlScore + htmlScore + progMethScore + cppScore + javaScore ;
avgScore = totalScore/6 ;

//using if statement
string standing;
if(totalScore>300)
{
standing = "PASSED";
}
else{
   standing ="FAILED";
}
//CREATING A NEW PAGE
system("cls") ;
//// fore color and backgroynd color
system("color 27");

//output
cout<<"\n\n\t\t ========= Enter STUDENT REPORT ==========  ";
cout<<"\n\n\t\t ========= STUDENT NAME : "<<studentFname<<" "<<studentLname;
cout<<"\n\n\t\t ========= COURSE : "<<course;
cout<<"\n\n\t\t __________________________________________________  ";
cout<<"\n\n\t\t ========= MODULE                  "<<"SCORE";
cout<<"\n\n\t\t ========= SAD                     "<<sadScore;
cout<<"\n\n\t\t ========= SQL                     "<<sqlScore;
cout<<"\n\n\t\t ========= HTML                    "<<htmlScore;
cout<<"\n\n\t\t ========= PROGRAMMING METHOD      "<<progMethScore;
cout<<"\n\n\t\t ========= C++                     "<<cppScore;
cout<<"\n\n\t\t ========= JAVA                    "<<javaScore;

cout<<"\n\n\t\t __________________________________________________  ";
cout<<"\n\n\t\t TOTAL SCORE : "<<totalScore;
cout<<"\n\n\t\t AVERAGE SCORE : "<<avgScore;
cout<<"\n\n\t\t __________________________________________________  ";
cout<<"\n\n\t\t ========= STANDING :                 "<<standing;

		
		
		
		
		
		
		
		
		
		
	return 0;
}
