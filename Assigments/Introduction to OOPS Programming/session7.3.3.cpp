#include<iostream>
#include<fstream>

using namespace std;
int main(){
	ofstream file("my_fav_songs.txt",ios::app);
	if(!file){
		cout<<"error";
		return 1;
	}
	
	string ff;
	cout<<"enter a song:";
	getline(cin,ff);
	cout<<ff<<endl;
	
	file<<ff<<endl;
	
	file.close();
	
	cout<<"--------successfully create---------";
	return 0;
}
