#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool isValid(vector<int> arr,int n,int c, int minDist){
	int cow= 1, lastStallPos=arr[0];
	
	for(int i=0;i<n;i++){
		if(arr[i]-lastStallPos>= minDist){
			cow++;
			lastStallPos = arr[i];
		}
		if(cow==c){
			return true;
		}
	}
	return false;
}

int getDistance(vector<int> &arr,int n,int c){
	
	sort(arr.begin(),arr.end());
	
	int start=1, end= arr[n-1]-arr[0], ans= -1;
	
	while(start<=end){
		int mid= start+(end-start)/2;
		
		if(isValid(arr,n,c,mid)){
			ans= mid;
			start= mid+1;
		}
		else{
			end= mid-1;
		}
	}
	return ans;
}

int main(){

	vector<int> arr= {1,2,8,4,9};
	int n=5, c=3;
	
	
	cout<<getDistance(arr,n,c);

	return 0;
}

