#include<iostream>
#include<vector>
using namespace std;

double pow(int x, int n){
	
	long binForm= n;
	if(n<0){
		x=1/x;
		binForm= -binForm;
	}
	double ans=1;
		
	while(binForm>0){
		if(binForm%2==1){
			ans *= x;
		}
		x*=x;
		binForm/=2;
	}
	return ans;
}

int main(){
	
	int x=3, n=3;
	
	cout<<pow(x,n);

	return 0;
}

