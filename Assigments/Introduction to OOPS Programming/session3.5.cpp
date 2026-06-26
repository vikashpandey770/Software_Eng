/*
5. Simulate a BookMyShow ticket booking by creating a Ticket class that prints 
'Saving your ticket...' in its destructor. Create and delete a Ticket object to 
demonstrate the destructor lifecycle.<br><br><em><strong>Hint:</strong> Use the
 __del__ method (Python) or ~Ticket() (C++) to define the destructor.</em>

*/
#include<iostream>
#include<string.h>

using namespace std;
class Ticket{
public:

Ticket(){
	cout<<"Ticket booking successfully"<<endl;
}	
~Ticket(){
	cout<<"saving your ticket"<<endl;
}
	
};

int main(){
	
	Ticket *t=new Ticket();
	cout<<"enjoy your movie"<<endl;
	delete t;
	return 0;
}
