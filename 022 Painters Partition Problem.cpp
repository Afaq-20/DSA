#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> arr,int n, int m, int maxTime){
	int painter= 1, time=0;
	
	for(int i=0;i<n;i++){
		if(time+arr[i]<= maxTime){
			time +=arr[i];
		}
		else{
			painter++;
			time=arr[i];
		}
	}
	return painter<=m;
}


int minTime(vector<int> &arr,int n, int m){

	int sum=0, maxVal=INT_MIN;
	
	for(int i=0;i<n;i++){
		sum +=arr[i];
		maxVal= max(maxVal,arr[i]);
	}
	
	int start=maxVal, end= sum, ans=-1;
	
	while(start<=end){
		int mid= start+(end-start)/2;
		
		if(isValid(arr,n,m,mid)){
			ans= mid;
			end= mid-1;
		}
		else{
			start= mid+1;
		}
	}
	return ans;
}
int main(){

	vector<int> nums= {40,30,10,20};
	int n=4, m=2;
	
	cout<<minTime(nums, n,m);

	return 0;
}

