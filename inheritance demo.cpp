/*#include <iostream>
using namespace std;

class BASE {
	public :
		BASE (){
			cout<<"Parent Class"<<endl;
		}
		void function1(){
			cout<<"I'm function of Parent Class"<<endl;
		}		
};

class Derived : public BASE {
	public :
	Derived(){
		cout<<"Second Class"<<endl;
	}
	void function2(){
		cout<<"I'm function of Derived Class"<<endl;
	}
};

int main(int argc, char** argv) {
	
	BASE obj1;
	obj1.function1();
	
	cout<<"\n"<<endl;
	
	Derived obj2;
	obj2.function1();
	obj2.function2();
	return 0;
}*/


                  //************(PROGRAM)********//

/*#include<iostream>
using namespace std;

class Employee {
	protected :
		int salary;
};

class Programmer : public Employee {
	
	public :
	void setsalary (int s){
		salary = s;
	}
	int showsalary (){
		return salary;
	}
};

int main () {
	
	Programmer obj;
	obj.setsalary(500000);
	cout<<obj.showsalary();
	return 0;
	
}*/



                 //**********(PROGRAM)***********//


#include<iostream>
using namespace std;

class Math {
	public :
		float a;
		float b;
	void get_val(){
			cout<<"Enter First Number : ";
			cin>>a;
			cout<<"Enter Second Number : ";
			cin>>b;
		}
};

class Calculation : public Math {
	public :
		float result;
		int Sum(){
			result = a+b;
			cout<<"SUM of two Numbers is = "<<result; 
		}
		int Multiplication(){
			result = a*b;
			cout<<"\nMultiplication of two Numbers is = "<<result;
		}
		int Sub(){
			result = a-b;
			cout<<"\nSUB of two Numbers is = "<<result;
		}
		float Division(){
			result = a/b;
			cout<<"\nDivision of two Numbers is = "<<result;
		}
};
 int main(){
 	Calculation  obj1;
 	
 	obj1.get_val();
 	obj1.Sum();
 	obj1.Multiplication();
 	obj1.Sub();
 	obj1.Division();
 }
