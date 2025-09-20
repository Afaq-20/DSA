#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


int sum(int n){
	if(n == 1){
		return 1;
	}
	
	return n+sum(n-1);
}


int factorial(int n){
	if(n == 0){
		return 1;
	}
	
	return n*factorial(n-1);
}

int main(){

	cout<<"Factorial : "<<factorial(4)<<endl;
	cout<<"Sum : "<<sum(4);
	return 0;
}

