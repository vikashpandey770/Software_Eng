#include<iostream>
#include<fstream>

using namespace std;

int main(){
	
	ofstream file("insta_followers.txt");
	
	if(!file){
		cout<<"error";
		return 1;
	}
	
	string user;
	for(int i=1;i<5;i++){
	
	cout<<"enter a username:";
	getline(cin,user);
	
	cout<<"your user name is:"<<user<<endl;
}
	file.close();
	return 0;
}
