/*
3. Write a function in Java or Python that simulates a Flipkart-style search: overload a method 
searchProduct() to allow searching by product name or by product name and category. Demonstrate
 both usages with sample data.
*/
#include<iostream>
#include<string>

using namespace std;
 		string product_name;
 		string category;

 class Flipkart{
 	public:
 		Flipkart(){
 			
 			cout<<"enter a product name:";
 			getline(cin,product_name);
 			
	 }
		 
		 void searchproduct(string productname, string category){
		 	cout<<"enter a product name:";
		 	getline(cin,productname);
		 	cout<<"enter a category:";
		 	getline(cin,category);		 	
		 }
		 
		 void display(){
		 	cout<<"your product name:"<<product_name<<endl;
		 	cout<<"your category is:"<<category<<endl;
		 }
	
 };
int main(){
	
	Flipkart fp;
fp.searchproduct("car","vehicle");

fp.display();


	return 0;
}
