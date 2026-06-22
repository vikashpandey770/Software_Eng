/*
3.Create a Podcaster class that also inherits from SocialMediaUser 
and adds a property podcastName and a method publishEpisode(episodeTitle)
 that prints 'Episode [episodeTitle] published on [podcastName]'.
*/

#include<iostream>
#include<string.h>
using namespace std;

class SocialMediaUser{
	public:
		
	string podcastName;
	string title;
	//constructor
	SocialMediaUser(){
	cout<<"enter a podcast name:";
	getline(cin,podcastName);
	}
	
	// method
	void publishEpisode(){
		cout<<"title:";
		getline(cin,title);
				cout<<"----------------------------------------------"<<endl;

		cout<<" Episode "<<title<<" published on "<<podcastName<<endl;
	}
	
};

class Podcaster: public SocialMediaUser{
	
	public:
		
};

int main(){
	Podcaster p;
	p.publishEpisode();
	
	
	
	return 0;
}
