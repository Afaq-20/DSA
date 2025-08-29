#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr,int m,vector<int> &arr2,int n){
	
	int idx=m+n-1;
	int i=m-1;
	int j=n-1;
	
	while(i>=0 && j>=0){
		if(arr[i]<arr2[j]){
			arr[idx]=arr[i];
			idx--;i--;
		}
		else{
			arr[idx]=arr2[j];
			idx--;j--;
		}
	}
	
	
	while(j>=0){
		arr[idx--]=arr2[j--];
//		idx--;j--;
	}
	
}

int main(){

	vector<int> nums= {4,5,7};
	vector<int> nums2= {2,3,4};
	
	int m=nums.size();
	int n=nums2.size();
	
	merge(nums,m,nums2,n);
	
	for(int i=0;i<nums.size();i++){
		cout<<nums[i]<<" ";
	}
	

	return 0;
}

