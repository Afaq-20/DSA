#include<iostream>
#inlcude<vector>
using namespace std;

int main(){
	
	vector<int> num= {4,2,1,2,1};
	
	for(int val:num){
		ans ^=val;
	}
	
	cout<<ans;
	
	return 0;
	
}
