/*
2. Modify your tasklist_c.c to add a function markTaskDone(int index) that sets the selected
 task to 'DONE' in the array, then print the updated list.<br><br><em><strong>Hint:</strong>
  Use a separate status array or append ' - DONE' to the task string.</em>.
*/
#include<iostream>
#include<string.h>
using namespace std;
string  task[5];

void marktaskdone(int index){
	if(index >= 0 && index<5){
		task[index] +="-done";
	}
}
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
