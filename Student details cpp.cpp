#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <iomanip>
using namespace std;

class student{
	private:
		int *roll_no, *dob;
		char *name, *class1, *division, *blood_grp, *address;
		long *mob_no;
		static int count;
	public:
		student();
		~student();
		void setdata();
		void showdata();
		void counter();
};

int student::count;
student::student(){
	name=new char;
	roll_no=new int;
	class1=new char;
	division=new char;
	dob=new int;
	blood_grp=new char;
	mob_no=new long;
	address=new char;
}
student::~student(){
	delete name;
	delete roll_no;
	delete class1;
	delete division;
	delete dob;
	delete blood_grp;
	delete mob_no;
	delete address;
	cout<<"Information is deleted"<<endl;
}

void student::setdata(){
	cout<<"Enter details of student : "<<endl;
	cout<<"Name : ";
	cin>>name;
	cout<<"Roll No : ";
	cin>>*roll_no;
	cout<<"Class : ";
	cin>>class1;
	cout<<"Division : ";
	cin>>division;
	cout<<"Date of Birth : ";
	cin>>*dob;
	cout<<"Blood group : ";
	cin>>blood_grp;
	cout<<"Mobile No. : ";
	cin>>*mob_no;
	cout<<"Address : ";
	cin>>address;
}

void student::showdata(){
	cout<<"Name : "<<name<<endl;
	cout<<"Roll No. : "<<*roll_no<<endl;
	cout<<"Class : "<<class1<<endl;
	cout<<"Division : "<<division<<endl;
	cout<<"Date of Birth : "<<*dob<<endl;
	cout<<"Blood group : "<<blood_grp<<endl;
	cout<<"Mobile No. : "<<*mob_no<<endl;
	cout<<"Address : "<<address<<endl;
}

void student::counter(){
	count++;
	cout<<"No. of students : "<<count<<endl;
}

int main(){
	int n;
	cout<<"Enter no. of students : ";
	cin>>n;
	student s[n];
	for(int i=0;i<n;i++){
		s[i].setdata();
	}
	cout<<"******************"<<endl;
	for(int i=0;i<n;i++){
		s[i].counter();
	}
	cout<<"Information of student : "<<endl;
	for(int i=0;i<n;i++){
		s[i].showdata();
	}
	return 0;
}












