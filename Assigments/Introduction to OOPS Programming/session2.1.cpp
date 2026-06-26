#include<iostream>
#include<string.h>

using namespace std;

class Playlist{
	
	private:
		string name;
		string createdOn;
		bool isPublic;
		
		
		public :
			Playlist(){
				cout<<"enter a name:";
				getline(cin,name);
				cout<<"created on:";
				cin>>createdOn;
				cout<<"is public:";
				cin>>isPublic;
			}
			
			void print(){
				
				cout<<"your name is:"<<name<<endl;
				cout<<"created on:"<<createdOn<<endl;
				cout<<"is public :"<<isPublic<<endl;
			}
};
int main(){
	
	Playlist p;
	p.print();
	
	return 0;
}
