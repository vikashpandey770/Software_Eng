#include<iostream>
#include<string.h>

using namespace std;

class Ticket{
	public:
		Ticket(){
			cout<<"booking Your Ticket...."<<endl;

		}
	 
	~Ticket(){
		cout<<"saving your ticket";
		
	}	
};

int main(){

Ticket t;

	return 0;
}
