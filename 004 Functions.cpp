#include <iostream>
using namespace std;

//Find the binomial coefficient

int fic(int n){
	
	int fict= 1;
	
	for(int i=1;i<=n;i++){
		fict *= i;
	}	
	return fict;
}

float nCr(int n, int r){
	int factN = fic(n);
	int factR = fic(r);
	int factNR = fic(n-r);
	
	return factN/(factR*factNR);
}
////////////////////////////////////



//Sum of all the digits in a number

int digSum(int num){
	int sum;
	
	while(num>0){
		int lastDigit= num%10;
		num /=10;
		sum += lastDigit;
	}
	return sum;
}
/////////////////////////////////////


//Find a Prime Numbers from 2 to N numbers

int Prime(int x){
	
	bool np= false;
	
	for(int m= 2;m<6;m++){
		if(x%m==0){
			np= true;
			break;
		}
	}
	if(np==true){
		cout<<x<<" is not Prime number. ";	
	}else{
		cout<<x<<" is a Prime number. ";
	}
}
///////////////////////////////////////////



int main(){
	
	int x,y;
	
	cout<<"Enter a Valid Number: ";
	cin>>x;
	cout<<"Enter another Valid Number: ";
	cin>>y;
	
	cout<<digSum(x);
	cout<<endl;
	cout<<nCr(x,y);
	cout<<endl;
	
	for(int i=2;i<=x;i++){
		Prime(i);
		cout<<endl;
	}
	
	return 0;
}








