/*
Create a Task class in your favorite OOP language (Java, Python, or C++)
 with properties: title and isDone. Add a method markDone() that sets
  isDone to true, and a method display() that prints the task with its status.
*/

#include<iostream>
#include<string.h>

using namespace std;
class Task{
	private:
		string title;
		bool  isDone;
public:
	
		Task(string t){
	
		cout<<"enter a title:";
		getline(cin,title);
		
		cout<<"is done:";
		cin>>isDone;	
			
		isDone=false;
	
	}


void markDone(){
	cout<<"your title is:"<<title<<endl;
	cout<<"your is done:"<<isDone<<endl;
	
	isDone=true;
	
}
void display(){
	
	cout<<"title"<<title<<" [" << (isDone ? "DONE" : "PENDING") << "]" << endl;
	   
}
		
};

int main(){
	
	Task ts();
	ts.markDone();
	ts.display();
	
	return 0;
}
