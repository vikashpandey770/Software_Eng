/*
2.Build a YouTuber class that inherits from SocialMediaUser and adds a
 property channelName and a method uploadVideo(title) that prints'Video[title]uploaded to [channelName]'.

*/

#include<iostream>
#include<string.h>

using namespace std;

class YouTuber{
	public:
	string title;
string channelName;

//consturctor

YouTuber(){
	cout<<"title:";
	getline(cin,title);
	cout<<"channelName:";
	getline(cin,channelName);
	
}

void uploadvidio(){
	cout<<"-----------------------------------------"<<endl;
	cout<<"Vidio title:"<<title<<" uploaded to "<<channelName<<endl;
}

};

class SocialMediaUser: public YouTuber{
	public:
		
};


int main(){
	
	SocialMediaUser s;
	s.uploadvidio();
	return 0;
}
