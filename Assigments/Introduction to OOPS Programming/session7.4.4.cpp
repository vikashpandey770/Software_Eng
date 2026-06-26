#include<iostream>
#include<fstream>

using namespace std;
int main(){
	ofstream file("wishlist.txt");
	if(!file){
		cout<<"error";
		return 1;
	}
	
	
	for(int i=0;i<3;i++){
	string ff;
	int price;
	cout<<"enter a Product:";
		getline(cin,ff);


		cout<<"enter a price:";	
		cin>>price;
cin.ignore();
	cout<<ff<<endl;		
	cout<<price<<endl;
	
	file<<ff<<endl;
	file<<price<<endl;	
	
}

	file.close();
	cout<<"--------successfully create---------";
	
	
	return 0;
}
