/*1. Create a Content class with properties: title, platform, views, and 
status. Write a method to display all details of a Content object.
*/
#include<iostream>
#include<string.h>

using namespace std;
class Content{
	private:
		string title;
		string platform;
		string statuss;
	
		int views;
	
	public:
		Content(){
			cout<<"enter a title:";
			getline(cin,title);
			cout<<"enter a platform:";
			getline(cin,platform);
				cout<<"enter a status:";
			getline(cin,statuss);
		
			cout<<"enter a views:";
				cin>>views;
				
		}
		void print() {
			cout<<"your  title:"<<title<<endl;
			cout<<"your platform:"<<platform<<endl;
			cout<<"your views:"<<views<<endl;
			cout<<"your status:"<<statuss<<endl;
		}
};
int main(){
	Content co;
	cout<<endl;
	co.print();
	return 0;
}
