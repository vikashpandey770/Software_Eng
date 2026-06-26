/*
5. Implement hierarchical inheritance by creating an InstagramInfluencer class that inherits from
 SocialMediaUser and adds a method postStory(storyTitle) which prints '[username] posted a new
  story: [storyTitle]'.<br><br><em><strong>Hint:</strong> Think about how SocialMediaUser is
   the parent for YouTuber, Podcaster, and InstagramInfluencer.</em>
*/
#include<iostream>
#include<fstream>
using namespace std;

class SocialMediaUser{
	private: 
		string username;
	string title;

	public:
		SocialMediaUser(){
			cout<<"username:";
			getline(cin,username);
			cout<<"story title:";
			getline(cin,title);
		}
		
		
};


class InstagramInfluencer:public SocialMediaUser{
	public:
		
			void postStory(){
			cout<<username<<" posted a new story: "<<title;
		}
	
};


int main(){
	SocialMediaUser s;
	s.postStory();

	
	return 0;
}
