#include <iostream>
using namespace std;

class publication{
	private:
		string title;
		float price;
	public:
	publication(){};
		void set(){
			cout<<"Title : ";
			cin>>title;
			cout<<"Price : ";
			cin>>price;
		}
		void display(){
			cout<<"Title : "<<title<<endl;
			cout<<"Price : "<<price<<endl;
		}
};

class book : public publication{
	private:
		int page_count;
	public:
		
	void set_book(){
		try{
			set();
			cout<<"Page Count = ";
			cin>>page_count;
			
			if(page_count<=0)
				throw page_count;
		}
		catch(int x){
			cout<<"Invalid page count"<<endl;
			page_count=0;
		}
	}
	
	void display_book(){
		display();
		cout<<"Page count = "<<page_count<<endl;
	}
};

class tape : public publication{
	private:
		float playing_time;
	public:
		void set_tape(){
			try{
				set();
				cout<<"Playing time : ";
				cin>>playing_time;
				
				if(playing_time<=0)
					throw playing_time;
			}
			catch(float x){
				cout<<"invalid time"<<endl;
				playing_time=0;
			}
		}
		void display_tape(){
			display();
			cout<<"Playing time = "<<playing_time<<endl;
		}
};

int main(){
	book b1;
	tape t1;
	b1.set_book();
	cout<<"*********"<<endl;
	cout<<"Book information : "<<endl;
	b1.display_book();
	cout<<"*********"<<endl;
	t1.set_tape();
	cout<<"*********"<<endl;
	cout<<"Tape information : "<<endl;
	t1.display_tape();
    return 0;
}










