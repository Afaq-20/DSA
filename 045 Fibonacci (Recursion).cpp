#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int Fib(int n){
	if(n == 0 || n == 1){
		return n;
	}
	
	return Fib(n-1) + Fib(n-2);
}

bool isSorted(vector<int>& arr, int n){
	if(n == 0 || n == 1){
		return true;
	}
	
	return arr[n-1] >= arr[n-2]  && isSorted(arr, n-1);
}

int main(){

	cout<<Fib(3);
	
	vector<int> nums= {1,2,3,4,5};
	
	cout<<isSorted(nums,nums.size());

	return 0;
}

