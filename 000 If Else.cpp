#include <iostream>
using namespace std;

int main(){
	
	char a;
	cout<<"Enter a Character ";
	cin>>a;
	
	if(a<='z'&&a>='a'){
		cout<<"This character is lowercase";
	}
	else{
		cout<<"This character is uppercase"<<endl;
	}


	
	//Ternary Statement
	
	int n=45;
	cout<<(n>=0?"Positive":"Negative");
	/////////////////////////////////



		
	return 0;
}



