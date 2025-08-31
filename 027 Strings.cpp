#include<iostream>
#include<string>
#include <algorithm> 
using namespace std;

int main(){

	string str;
	
	getline(cin,str);
	
	cout<<"Output "<<str<<endl;
	
	reverse(str.begin(),str.end());
	cout<<str;
	

	return 0;
}

