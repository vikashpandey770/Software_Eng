/*
Write a simple C program tasklist_c.c that allows you to add up to 5 tasks
 (as strings) to a global array and print all tasks using a for loop.
*/

#include<iostream>
#include<string.h>

using namespace std;


string  task[5];
int main(){
	
	cout<<"enter a task:"<<endl;
	for(int i=0;i<5;i++){
		cout<<"task:"<<i+1<<":";
		getline(cin,task[i]);
		
	}
	
	cout<<"print the all tasks:"<<endl;
	
	for(int i=0;i<5;i++){
	
	cout<<"task:"<<i+1<<":"<<task[i]<<endl;
	
}
	return 0;
}
