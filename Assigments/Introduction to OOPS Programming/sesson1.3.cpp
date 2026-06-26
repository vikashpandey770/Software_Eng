#include<iostream>
#include<string.h>

using namespace std;

class Task{
	private :
		string title;
		bool isDone;
		public:
			Task(){
				cout<<"enter a title:";
				getline(cin,title);
				cout<<"enter is done:";
				cin>>isDone;
			}
			
			void markDone(){
				cout<<"your title is:"<<title<<endl;
				
				cout<<"enter is done:"<<isDone<<endl;
			
				if(isDone==0){
					
					cout<<"true";
				}
				else{
					cout<<"false";
				}
				
			}

};
int main(){
	Task t;
	t.markDone();
	
return 0;	
}
