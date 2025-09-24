#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int binarySearch(vector<int> arr, int target,int start, int end){

	if(start <= end){
		int mid= start+ (end -start)/2;
		
		if(arr[mid] == target){
			return mid;
		}
		else if(target <= arr[mid]){
			return binarySearch(arr, target, start, mid-1);
			
		}
		else if(target >= arr[mid]){
			return binarySearch(arr, target, mid+1, end);
		}
		else{
			cout<<"Target does not exist";
			return 0;
		}
	}
	return -1;
}

int search(vector<int> arr, int target){
	
	return binarySearch(arr, target,0,arr.size()-1);	
}

int main(){

	vector<int> nums= {-1,0,3,5,9,12};
	
	int target= 9;
	
	cout<<search(nums,target);
	
	
	return 0;
}

