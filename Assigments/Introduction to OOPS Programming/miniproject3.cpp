#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class Content{
	
	private: 
		string title[100];
		string platform[100];
		int views[100];
		string status[100];
		int pointer=1;
		string line;
		
	public : 
		
		
		void save(){
			
			ofstream write("content_list.txt",ios::app);
			
			write<<"\n----------Saved Data----------\n";
			write<<"Data Entry : "<<pointer<<"\nTitle : "<<title[pointer]<<endl<<"platform : "<<platform[pointer]<<endl<<"View's : "<<views[pointer]<<endl<<"Status : "<<status[pointer];
			
			write.close();
			pointer++;
			
			cout<<"\nData entery successfull";
			
		}
		
		int addData(){
			
			cout<<"\n\n----------Add Data----------\n";
			
			cout<<"Enter the title : ";
			cin>>ws;
			getline(cin,title[pointer]);
			
			cout<<"Enter the platform of publishing : ";
			cin>>ws;
			getline(cin,platform[pointer]);
			
			cout<<"Enter the number of view's: ";
			cin>>views[pointer];
			
			cout<<"Enter the status  : ";
			cin>>status[pointer];
			
			save();
				
		}
		
		int view(){
			
			ifstream read("content_list.txt");
			if(!(read.is_open())){
				
				cout<<"\nError opening file !";
			}
			
			cout<<"\n\n-----Content.txt--------\n";
			while(getline(read,line)){
				cout<<line<<"\n";
			}
		}
		
	
		
};
int main()
{
	Content obj;
	
	int choice; 
	
	do {
		cout<<"\n\n---------Function's---------\n1.Add content\n2.View Data\n3.Exit!!\n";
		cout<<"Enter your  choice : ";
		cin>>choice;
		
		switch(choice){
			case 1 : 
				obj.addData();
				break;
			case 2 :
				obj.view();
				break; 
			case 3:
				cout<<"\nExititng!!!";
				break;  	
			default : 
				cout<<"Invilid input!";
				break;
		}
	}while(choice!=3);
	
	return 0;
}
