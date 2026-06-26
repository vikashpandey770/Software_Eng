/*
2. Build two classes, InstagramUploader and YouTubeUploader, each with a method uploadContent(). Both should extend
 a base class SocialMediaUploader and override uploadContent() to print a message showing how uploading works
  differently for Instagram and YouTube.
*/
#include<iostream>
#include<string.h>

using namespace std;

class SocialMediaUploader{
	public:
	void uploadContent(){
		cout<<"upload content socialmediaa:"<<endl;
	}
	
};
class InstagramUploader: public SocialMediaUploader{
public:
void uploadContent() {
	cout<<"upload insta photo and vidios and reels"<<endl;
	
}	
	
};


class YouTubeUploader: public SocialMediaUploader{
	public:
 void	uploadContent(){
	cout<<"upload a you tube vidio and show the vidios"<<endl; 
		
	}
};
int main(){
	SocialMediaUploader sm;
	sm.uploadContent();
	
	InstagramUploader insta;
	insta.uploadContent();
	
	
	YouTubeUploader you;
	you.uploadContent();
	return 0;
}
