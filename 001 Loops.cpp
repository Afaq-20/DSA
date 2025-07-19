#include <iostream>
using namespace std;

int main(){
	
//	While Loop
	int n= 10;
	int i= 1;
	
	while(i<=n){
		cout<<i;
		i++;
	}
	//////////////////////
	
	cout<<endl;
	
	
//	For Loop
	for(int j=1;j<=10;j++){
		cout<<j;
	}
	cout<<endl;

	
	
	
//	Practice Question
	int sum=0;
	
	for(int k= 1;k<=10;k++){
		sum+=k;
		if(k>5){
			break;
		}
	}
	cout<<sum;
	cout<<endl;




//	Practice Question
	int sumOdd=0;
	
	for(int k= 1;k<=10;k++){
		if(k%2!=0){
			sumOdd+=k;
		}
	}
	cout<<sumOdd;
	cout<<endl;
	
	//////////////////////
	
//	DoWhile

	int num= 1;
	int l= 0;
	
	do{
		cout<<num;
		l++;
		num++;	
	}while(l<10);

	//////////////////////
	
	
	
//	Check if the number is Prime or not
	int userInput;
	int np= false;
	cout<<"Enter a valid number: ";
	cin>>userInput;
	
	for(int m= 2;m<6;m++){
		if(userInput%m==0){
			np= true;
			break;
		}
	}
	if(np==true){
		cout<<"Input Number is not Prime number. ";	
	}else{
		cout<<"Input Number is a Prime number. ";

	}
	
	return 0;
}











