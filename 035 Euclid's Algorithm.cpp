#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int gcd(int a, int b){
	while(a>0 && b>0){
		if(a>b){
			a= a% b;
		}else{
			b= b% a;
		}
	}
	
	if(a==0) return b;
	return a;
}

int lcm(int a,int b){
	int gc= gcd(a,b);
	return (a*b)/gc;
}

int main(){

//	cout<<gcd(20,28)<<endl;
	cout<<lcm(20,28);

	return 0;
}

