/*
Q 3. using a pointer to swaping
*/
#include<iostream>
#include<string>

using namespace std;
void swap(int *a,int *b){
	
	int svaap;
	svaap= *a;
	*a = *b;
	*b =svaap;
	

	cout<<"A="<<*a<<endl;
	cout<<"B="<<*b<<endl;	
}
int main(){
	int a,b;
	cout<<"enter a:";
	cin>>a;
	cout<<"enter b:";
	cin>>b;
	cout<<"a is:"<<a<<endl;
	cout<<"b is:"<<b<<endl;
	
	cout<<"after swapping two number A and B"<<endl;
	
	swap(&a,&b);
	return 0;
}

/*
Here, a and b store the addresses of x and y. Using *a and *b, 
the function directly modifies the original variables.

Pass-by-reference (using pointers or C++ references) is necessary for swapping because:

It allows the function to access the original variables.
Changes made inside the function affect the actual variables in main().
Pass-by-value only changes local copies, so swapping would not work.
*/


