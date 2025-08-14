#include<iostream>
#include<vector>
using namespace std;

int moore(vector<int>& nums){
	int freq=0, ans=0;
	
	for(int i=0;i<nums.size();i++){
		if(freq==0){
			ans=nums[i];
		}
		if(ans==nums[i]){
			freq++;
		}
		else{
			freq--;
		}
	}
	return ans;
}

int main(){
	
	vector<int> nums= {2,1,3,4,1};
	
	cout<<"Most frequent number is: "<<moore(nums);
	
	
	return 0;
}
