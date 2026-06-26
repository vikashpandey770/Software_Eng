/*
5. Given a file called insta_followers.txt containing Instagram usernames (one per line), write a program
 to count and display the total number of followers listed in the file.<br><br><em><strong>Constraint:
 </strong> Do not use any array or vector to store the names—just count as you read.</em>
*/

#include<iostream>
#include<fstream>

using namespace std;

int main(){
	
	string username;
	int count;
	ofstream file("insta_followers.txt");
	cout<<"enter a instagram username:";
	getline(cin,username);
	file<<username<<endl;
	cout<<"total follwers :";
	cin>>count;
	file<<count<<endl;
	file.close();
	
	cout<<"success data store";

	return 0;
}
