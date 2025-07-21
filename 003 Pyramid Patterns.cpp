#include <iostream>
using namespace std;

int main(){
	
//	int n = 4;
//	int m= n;
//	
//	for(int i=0;i<=n;i++){
////		for spaces
//		for(int j= 0;j<=n-i-1;j++){
//			cout<<" ";
//		}
//		
////		for left trieangle
//		for(int j= 0; j<=i;j++){
//			cout<<j+1;
//		}
//		
////		for right triangle
//		for(int j=i;j>=1;j--){
//			cout<<j;
//		}
//		cout<<endl;
//	}
	
	
	
	int n= 3;
	
	for(int i=0;i<=n;i++){
//		for spaces
		for(int j= 0;j<=n-i-1;j++){
			cout<<" ";
		}
		cout<<"*";
		
//		for spaces
		for(int j=1;j<=2*i-1;j++){
			cout<<" ";
		}
		if(i!=0){
			cout<<"*";
		}
		cout<<endl;
	}
	



	for(int i=0;i<=n-1;i++){
//		for spaces
		for(int j= 1;j<=i+1;j++){
			cout<<" ";
		}
		cout<<"*";
//		
//		for spaces
		for(int j=2;j<2*(n-i)-1;j++){
			cout<<" ";
		}
		if(i!=n-1){
			cout<<"*";
		}
		cout<<endl;
	}

	
	return 0;
}
