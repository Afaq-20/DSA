#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

void printDigits(int n){
	int sum= 0;
	
	while(n!=0){
		int digit = n% 10;
		sum += digit;
//		cout<<digit<<endl;
		
		n= n/10;
	}
	
	cout<<sum<< endl;
}

int main(){
	
	int n=3456;

	printDigits(n);
	
//	Shortcut for counting digits 
	cout<<(int)(log10(n)+1);

	return 0;
}

