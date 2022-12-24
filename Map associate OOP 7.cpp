#include<iostream>
#include<map>
#include<string>
#include<utility>
#include<iomanip>
using namespace std;

int main(){
	typedef map<string,int> mapType;
	mapType populationMap;
	
	populationMap.insert(pair<string,float>("Maharashtra",345));
	populationMap.insert(pair<string,float>("Bihar",456));
	populationMap.insert(pair<string,float>("Gujarat",342));
	populationMap.insert(pair<string,float>("Karnataka",892));
	populationMap.insert(pair<string,float>("Uttar Pradesh",123));
	populationMap.insert(pair<string,float>("Kashmir",279));
	populationMap.insert(pair<string,float>("Tamilnadu",257));
	populationMap.insert(pair<string,float>("Goa",168));
	populationMap.insert(pair<string,float>("Chattisgarh",34));
	populationMap.insert(pair<string,float>("Delhi",257));
	populationMap.insert(pair<string,float>("Assaam",91));
	populationMap.insert(pair<string,float>("Madhyapradesh",45));
	populationMap.insert(pair<string,float>("Punjab",35));
	
	mapType::iterator iter=populationMap.end();
	
	for(iter=populationMap.begin(); iter!=populationMap.end(); iter++){
		cout<<iter->first<<setw(15)<<" : "<<iter->second<<"million/s"<<endl;
	}
	
	string state;
	string reply;
	
do{
	cout<<"Enter the state you want to know population of : ";
	cin>>state;
	cout<<"******************"<<endl;
iter=populationMap.find(state);

if(iter!=populationMap.end()){
	cout<<state<<"Population is : "<<iter->second<<" million/s"<<endl;
	cout<<"Do you want to continue : ";
	cin>>reply;
}
}
while(reply=="yes");
	return 0;
}










