#include<iostream>
#include<vector>
using namespace std;

int maxWater(vector<int>& nums){
	int lp= 0, rp=nums.size()-1;
	int ans= 0;
	
	while(lp<rp){
		int width= rp-lp;
		int height= min(nums[lp],nums[rp]);
		int area= width*height;
		ans= max(ans,area);
		
		nums[lp]<nums[rp]?lp++:rp--;
	}
	return ans;
}

int main(){

	vector<int> nums= {1,8,6,2,5,4,8,3,7};
	
	cout<<"Container with max amount of water is: "<<maxWater(nums);

	return 0;
}

