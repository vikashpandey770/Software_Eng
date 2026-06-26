/*
Create a class Movie with a parameterized constructor and then use a copy
 constructor to duplicate a Movie object. Print both the original and 
 copied movie details to show they are identical.
*/

#include<iostream>
#include<string.h>

using namespace std;
 
 class Movie{
 	private :
 		string moviename;
 		
 	public:
 		
 		Movie(){
 			cout<<"enter a movie name:";
 			getline(cin,moviename);
		 }
		 
		 Movie(string m){
		 	moviename=m;
		 }
		 
		 // copy construcor
		 Movie(Movie &m){
		 	moviename=m.moviename;
		 }
		 
		 
		 void print(){
		 	cout<<"your movie name is:"<<moviename<<endl;
		 	
		 }
 };
 
int main(){
	
	Movie m;
	m.print();
	cout<<"------------------copy constructor use:---------------------"<<endl;
	
	
	Movie m2(m);
	m2.print();
	
	return 0;
}
