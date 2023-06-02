#include <iostream>
using namespace std;


class School{
	private:
		string name;
		
		public:
			School(string name)
			{
			setName(name);	
			}
			void setName(string name)
			{
				this->name =name;
				
			}
			string getName()
			{
				return name;
			}
};


class number{
	private:
	int value;
	
	public:
		void setName(int value)
		{
			this -> value =value;
		}
		int getName()
		{
			return value;
		}
};

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
//	School sch = School();
//	 sch.setName("ipmc");
//	 cout<<sch.getName(); 
	 School sch = School("ipmc");
	 cout<<sch.getName();
	 
	 number b1 = number();
	 b1.setName(90);
	 cout<<"\n"<<b1.getName(); 
	 
	return 0;
}
