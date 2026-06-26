/*
2.2. Add a member function to your Playlist class named togglePublic() that switches isPublic between
 true and false each time it is called. Demonstrate by toggling the value twice and printing the
result each time.
*/
#include<iostream>
#include<string>
using namespace std;
class Playlist{
private:
string name;
string createdOn;
bool isPublic;	
	public:
		Playlist(string n,string date,bool status){	
			name=n;
			createdOn=date;
			isPublic=status;
		}
		void Playlister(){
			cout<<"enter a playlist name:"<<name<<endl;
			cout<<"enter a date:"<<createdOn<<endl;
			cout<<"enter a is public status:"<<isPublic<<endl;	
		}
		void togglePublic(){
			isPublic=!isPublic;		
		}
};
int main(){
Playlist p("my song","2022-10-10",true);
cout<<"initial status:";
p.Playlister();

p.togglePublic();
cout<<"first toggle"<<endl;
p.Playlister();

p.togglePublic();
cout<<"second toggle"<<endl;
p.Playlister();

 

	
	return 0;
}
