#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& arr, int target){
	
	int start= 0, end= arr.size()-1;
	
	while(start<=end){
		
		int mid= start+(end-start)/2;
		
		if(arr[mid]==target){
			return mid;
		}
		if(arr[start]<=arr[mid]){
			if(arr[start]<=target && arr[mid]>=target){
				end= mid-1;
			}
			else{
				start= mid+1;
			}
		}
		else{
			if(arr[mid]<=target && arr[end]>=target){
				start= mid+1;
			}
			else{
				end= mid-1;
			}
		}
	}
	return -1;
}

int main(){

	vector<int> nums= {6,7,0,1,2,3,4,5};
	int target= 5;
	
	cout<<search(nums,target);

	return 0;
}

