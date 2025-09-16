#include<iostream>
#include<vector>
#include <set>
#include <algorithm> 

using namespace std;

// Brute Force Approach (Using Sets)
vector<vector<int>> threeSum(vector<int>& nums) {
	int n= nums.size();
	
	set<vector<int>> uniqueTriplets;
	
	for(int i=0; i<n; i++){
		int tar = -nums[i];
		set<int> s;
		
		for(int j=0; j<n; j++){
			int third= tar - nums[j];
			
			if(s.find(third) != s.end()){
				vector<int> trip = {nums[i],nums[j], third};
				sort(trip.begin(),trip.end());
				uniqueTriplets.insert(trip);
			}
			s.insert(nums[j]);
		}
	}
    return vector<vector<int>>(uniqueTriplets.begin(), uniqueTriplets.end());

}

//2 Pointers Approach(Optimal)
vector<vector<int>> threeSum(vector<int>& nums) {
	int n= nums.size();
	vector<vector<int>> ans;
	
	sort(nums.begin(),nums.end());
	
	for(int i=0; i<n; i++){
		if(i>0 && nums[i]==nums[i-1]) continue;
		
		int j= i+1, k=n-1;
		
		while(j<k){
			int sum = nums[i]+nums[j]+nums[k];
			
			if(sum<0){
				j++;
			}
			else if(sum>0){
				k--;
			}
			else{
				ans.push_back({nums[i],nums[j],nums[k]});
				j++;k--;
				
				while(j<k && nums[j]==nums[j-1]) j++;
			}
		}
	}
}



int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> result = threeSum(nums);

    cout << "Unique Triplets that sum to 0:\n";
    for (auto trip : result) {
        cout << "[ ";
        for (auto val : trip) {
            cout << val << " ";
        }
        cout << "]\n";
    }

    return 0;
}
