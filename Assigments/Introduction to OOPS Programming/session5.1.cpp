/*
1. Create a Java class called PaymentProcessor with two overloaded methods processPayment():
 one that takes only an amount, and one that takes amount and a coupon code. Print which
  version is called and the final amount in each case.
*/
#include<iostream>
#include<string.h>
using namespace std;

class PaymentProcessor{
	public:
	void processPayment(int amount){
		cout<<"enter a amount"<<amount<<endl;
	}
	
	void processPayment(int amount,string coupon){
		cout<<"enter a amount"<<amount<<endl;
		
		cout<<"enter a coupon code: "<<coupon<<endl;
		double discount=amount*0.10;
		int finalP =amount-discount;
		cout<<"your final amount is:"<<finalP<<endl;
	}
	
};
int main(){
	
	PaymentProcessor pp;
pp.processPayment(10);
pp.processPayment(100,"save 10%");

	
	return 0;
}
