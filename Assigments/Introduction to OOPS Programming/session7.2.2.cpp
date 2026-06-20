#include<iostream>
#include<fstream>

using namespace std;

int main(){
	ifstream file("my_fav_songs.txt");
	
	cout<<"--------this is a text reading page----------"<<endl;
	string sr;
	while(getline(file,sr)){
		cout<<sr<<endl;
	
	}
file.close();
return 0;	
}
