#include <iostream>
using namespace std;
class Glass{
	public:
		int liquidlevel=200;
		void Drink(int amount){
			if(amount>0 && amount<=liquidlevel){
				liquidlevel-=amount;
				cout<<"Current amount of water left: "<<liquidlevel<<endl;
					if(liquidlevel<100){
				Refill();
			}
			}
			else{
				cout<<"Invalid amount"<<endl;
			}
		};
		void Refill(){
			liquidlevel=200;
			cout<<"The glass is refilled to 200ml"<<endl;
		}
};
int main(){
	Glass g;
	string command;
	int amount;
	while(1){
		cout<<"Enter command: "<<endl;
		cin>>command;
		if(command=="exit"){
			cout<<"Exiting the program"<<endl;
			break;
		}
		else if(command=="drink"){
			cin>>amount;
			g.Drink(amount);
		}
		else{
			cout<<"Enter a valid command"<<endl;
			break;
		}
	}
	return 0;
}