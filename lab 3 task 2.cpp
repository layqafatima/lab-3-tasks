#include <iostream>
using namespace std;
class Date{
	int date;
	int month;
	int year;
	public:
	void display(int d,int m,int  y){
		cout<<d<<"/"<<m<<"/"<<y;
	}
};
int main(){
	Date d;
	d.display(2,4,2025);
	return 0;
}