#include<iostream>
#include<fstream>

using namespace std;

int main(){
	ifstream save("wishlist.txt");
	
	
	string ss;
	
	while(getline(save,ss)){
		cout<<ss<<endl;
	}
	save.close();
	return 0;
}
