#include <iostream>
#include <cmath>
using namespace std;

class complex{
	public:
		int real;
		int img;
		complex(){
			real=img=0;
		}
		
		complex operator+(complex);
		complex operator-(complex);
		complex operator*(complex);
		
		friend istream &operator>>(istream &in, complex &obj){
			cout<<"Enter real part : ";
			cin>>obj.real;
			cout<<"Enter imaginary part : ";
			cin>>obj.img;
			return(in);
		}
		
		friend ostream &operator<<(ostream &out, complex &obj){
			cout<<obj.real<<"+"<<obj.img<<"i"<<endl;
			return(out);
		}
};

complex complex::operator+(complex c1){
	complex add;
	add.real=real+c1.real;
	add.img=img+c1.img;
	return(add);
}

complex complex::operator-(complex c1){
	complex sub;
	sub.real=real-c1.real;
	sub.img=img-c1.img;
	return(sub);
}

complex complex::operator*(complex c1){
	complex mul;
	mul.real=(real*c1.real)-(img*c1.img);
	mul.img=(real*c1.img)+(img*c1.real);
	return(mul);
}

int main(){
	complex c1,c2,c3,c4,c5;
	cout<<"Default constructer value : "<<endl;
	cout<<c1;
	cout<<"Enter first number : "<<endl;
	cin>>c1;
	cout<<"Enter second number : "<<endl;
	cin>>c2;
	c3=c2+c1;
	c4=c1-c2;
	c5=c1*c2;
	cout<<"First number is : "<<c1<<endl;
	cout<<"Second number is : "<<c2<<endl;
	cout<<"Addition of two numbers is : "<<c3<<endl;
	cout<<"Subtraction of two numbers is : "<<c4<<endl;
	cout<<"Multiplication of two numbers is : "<<c5<<endl;
	return 0;
}













