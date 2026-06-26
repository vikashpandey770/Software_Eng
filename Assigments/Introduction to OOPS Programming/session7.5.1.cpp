#include<iostream>
#include<fstream>

using namespace std;

int main(){
	ifstream pass("insta_followers.txt");
	
	string sp;
	
	while(getline(pass,sp)){
		cout<<sp<<endl;
	}
	
	return 0;
}
