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
		int n;
		
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
			
			read.close();
		}
		
		int edit(){
			
			int choice ;
			
			do{
				cout<<"\nEnter \n1.Edit Title\n2.Edit Pubishing\n3.Views\n4.Status\n5.Exit\nwhat do you want to edit : ";
				cin>>choice;
				
				switch(choice){
					case 1: 
						cout<<"\nEnter the Data number you want to edit : ";
						cin>>n;
						
						cout<<"\nEnter the new title : ";
						cin>>ws;
						getline(cin,title[n]);
						
						
						break;
					case 2: 
						cout<<"\nEnter the Data number you want to edit : ";
						cin>>n;
						
						cout<<"\nEnter the new platform : ";
						cin>>ws;
						getline(cin,platform[n]);
						
						
						break;
					case 3: 
						cout<<"\nEnter the Data number you want to edit : ";
						cin>>n;
						
						cout<<"\nEnter the new title : ";
						cin>>views[n];
						break;
					case 4: 
						cout<<"\nEnter the Data number you want to edit : ";
						cin>>n;
						
						cout<<"\nEnter the new status: ";
						cin>>ws;
						getline(cin,status[n]);
						break;
					default : 
						cout<<"Invilid input !!";
						break;
				}
			}while(choice!=5);
			
			ofstream edit("content_list.txt");
			edit<<"\n----------Saved Data----------\n\n";
			for(int i=1;i<=pointer;i++){
				edit<<"Data Entry : "<<i;
				edit<<"\nTitle : "<<title[i];
				edit<<"\nplatform : "<<platform[i];
				edit<<"\nView's : "<<views[i];
				edit<<"\nStatus : "<<status[i]<<"\n\n";
			}
				edit.close();
		}
};
int main()
{
	Content obj;
	
	int choice; 
	
	do {
		cout<<"\n\n---------Function's---------\n1.Add content\n2.View Data\n3.Edit\n4.Exit!!\n";
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
				obj.edit();
				break;
				
			case 4:
				cout<<"\nExititng!!!";
				break;  	
			default : 
				cout<<"Invilid input!";
				break;
		}
	}while(choice!=4);
	
	return 0;
}
