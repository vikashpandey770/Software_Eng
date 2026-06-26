/*
2. Build a class Product for a Flipkart-style app with a parameterized constructor that
 takes productName, price, and rating as arguments and displays all
  details using a displayInfo() method.
*/

#include<iostream>
#include<string.h>

using namespace std;

class Product{
	private:
		string productName;
		int price;
		int rating;
		
		public:
			Product(){	
		cout<<"enter a product name:";
		getline(cin,productName);
			cout<<"enter a price:";
			cin>>price;
			cout<<"enter a rating:";
			cin>>rating;		
		}
		
		
		// parameterize
		Product(string pn,int p,int r){
			productName=pn;
			price=p;
			rating=r;
		}
		
		void displayInfo(){
			cout<<"your product name:"<<productName<<endl;
			cout<<"your price is:"<<price<<endl;
			cout<<"your rating is:"<<rating<<endl;
			for(int i=0;i<rating;i++){
				cout<<"*";
			}
		}
};
int main(){
	
	Product flipkart;
	cout<<"-----------------------------------------------"<<endl;
	flipkart.displayInfo();
	
	return 0;
}
