#include <iostream>
#include <string>
using namespace std;
class User{
   public:
   	int age;
   	string name;
};
int main(){
	User u;
	u.name="Theo";
	u.age=24;
	cout<<"My name is "<<u.name<<" and I am "<<u.age<<" years old";
	return 0;
}