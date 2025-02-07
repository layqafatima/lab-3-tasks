#include <iostream>
using namespace std;
class Employee{
	string firstname;
	string lastname;
	double monthlysalary;
	
	public:
	Employee(string f,string l,double s){
		firstname=f;
		lastname=l;
		monthlysalary=(s>0)?s:0.0;
	}
	string getFirstname() const{
		return firstname;
	}
	string getLastname() const{
		return lastname;
	}
	double getMonthlysalary() const{
		return monthlysalary;
	}
	double getYearlysalary() const{
		return monthlysalary *12;
	}
	void display() const{
		cout<<"Employee Name:"<<firstname<<" "<<lastname<<"\n"<<"Yearly Salary: "<<getYearlysalary()<<endl;
	}
	void raise(){    //no const cz we are modifying monthlysalary
		monthlysalary*=1.1;
	}
};

int main(){
	Employee emp1("Peter","Parker",100);
	Employee emp2("Josh","Smith",-200);

	cout<<"Before Raise"<<endl;
	emp1.display();
	emp2.display();
	
	emp1.raise();
	emp2.raise();
	cout<<"\nAfter Raise"<<endl;
	emp1.display();
	emp2.display();
	return 0;
}