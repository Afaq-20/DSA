#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> &arr, int target){
	
	int n= arr.size();
	int start= 0, end= n-1;
	
	
	while(start<=end){
		
//		int mid= (start+end)/2;
//		below formula will reduce the space complexity in worst case scenerio.
		int mid= start+(end-start)/2;

		if(target<arr[mid]){
			end= mid-1;
		}
		else if(target>arr[mid]){
			start= mid+1;	
		}
		else{
			return mid;
		}
		
	}
	return -1;
}

int main(){

	vector<int> arr= {-1,0,3,4,5,9,12};
	int target= 12;
	
	cout<<"Targeted Value is on "<<binarySearch(arr,target)<<" index.";

	return 0;
}

