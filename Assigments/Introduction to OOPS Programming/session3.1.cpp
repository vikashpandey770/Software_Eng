/*
1. Create a class called Playlist with a default constructor that
 sets the playlist name to 'My Favourites' and prints a welcome
  message when an object is created.
  
*/
#include<iostream>
#include<string.h>

using namespace std;

class Playlist{
	public:
	Playlist(){
		cout<<"My Favorites"<<endl;
		cout<<"welcome";	
	}
};
int main(){
	
	Playlist py;
	py.Playlist("welcomes");
	return 0;
}
