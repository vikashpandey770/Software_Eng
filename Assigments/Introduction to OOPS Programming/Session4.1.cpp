/*
Create a base class called SocialMediaUser with properties username and followers,
 and a method displayProfile() that prints the username and follower count.
*/

#include<iostream>
#include<string.h>
using namespace std;

class SocialMediaUser{
	private:
		string username;
		int followers;
		
	//	default constructor
	
	public:
	SocialMediaUser(){
		cout<<"username:";
		getline(cin,username);
		cout<<"follwers:";
	 	cin>>followers;
			
	}
 void displayProfile(){
		cout<<"username:"<<username<<endl;
		cout<<"followers count:"<<followers<<endl;
	}
	
};

int main(){
	
	SocialMediaUser so;
	so.displayProfile();
	
	return 0;
}
