/*Build a class called InstaStory with a protected property storyViews.
 Create a subclass called SponsoredStory that can access and display the storyViews value.
 */
 #include<iostream>
 #include<string>
 
 using namespace std;
 
 class InstaStory{
 	protected:
 		int storyviews;
 		public:
 			InstaStory(){
 				storyviews=200;
			 }
 };
 class Sponsoredstory:public InstaStory{
 	public:
 		void display(){
		 
 	cout<<"print the insta story:"<<storyviews<<endl;
 	
 }
 	
 };
 
 int main(){
 	
 	 Sponsoredstory s;
 	 s.display();
 	return 0;
 }

