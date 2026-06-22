/*
4. Demonstrate multilevel inheritance by creating a class GamingYouTuber that 
inherits from YouTuber and adds a method streamGame(gameName) which prints 
'[username] is now streaming [gameName] on [channelName]'.
*/

#include<iostream>
#include<string.h>

using namespace std;

class YouTuber{
	public:
		string username;
		string gamename;
		string channelname;
		
		YouTuber(){
			
			cout<<"enter a username:";
			getline(cin,username);
			cout<<"enter a gamename:";
			getline(cin,gamename);
			cout<<"enter a channelname:";
			getline(cin,channelname);
		}
		
		void streamGame(){
			cout<<username<<" is now streaming "<<gamename<<" on "<<channelname<<endl;
		}
	
};

class GamingYouTuber : public YouTuber{
	
	
};
int main(){
	
	GamingYouTuber t;
	t.streamGame();
	
	return 0;
}
