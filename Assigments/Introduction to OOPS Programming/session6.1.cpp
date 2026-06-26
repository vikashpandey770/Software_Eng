/*

Create a class called Song in your preferred OOP language with private properties title
 and artist. Add public getter and setter methods to access and modify these properties, 
 then create an object and update its title.
*/

#include<iostream>
#include<string>

using namespace std;
class Song{
		private:
		string title;
		string artist;
	
	public:
		
		// getter
		void  settitle(string t){
			title=t;
		}
		
		void setartist(string a){
			artist=a;
		}
		
		// setter
		string gettitle(){
			return title;
			
		}
		string getartist(){
			return artist;
		}

};

int main(){
	
	Song s;
	s.settitle("java developer");
	s.setartist("jigar sir");
	cout<<"title:"<<s.gettitle()<<endl;
	cout<<"artist:"<<s.getartist()<<endl;
	
	
	cout<<"after update title:"<<endl;
	s.gettitle();
	s.getartist();
	
	s.settitle("java full stack and python");
	cout<<"title:"<<s.gettitle();	
	
	return 0;
	
	
	
	}
