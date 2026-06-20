#include<iostream>
#include<fstream>

using namespace std;
int main(){
	ofstream file("my_fav_songs.txt");
	if(!file){
		cout<<"error";
		return 1;
	}
	file<<"1.yaad yaad yaad bs yaad rh jati h."<<endl;
	file<<"2.tere naam......."<<endl;
	file<<"3.tujhe yaad n meri aayi."<<endl;
	file<<"4.saiyara siyara ."<<endl;
	file<<"5.raja hmra s bhar gail mn ka tohar."<<endl;
	
	file.close();
	
	cout<<"--------successfully create---------";
	return 0;
}
