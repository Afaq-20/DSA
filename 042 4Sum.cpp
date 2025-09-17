#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int tar){
	sort(nums.begin(),nums.end());
	
	vector<vector<int>> ans;
	int n= nums.size();
	
	for(int i=0; i<n; i++){
		if(i>0 && nums[i] == nums[i-1]) continue;
		for(int j=i+1; j<n;){
			int p= j+1;	
			int q= n-1;

			
			while(p<q){
				int sum = nums[i]+ nums[j]+ nums[p]+ nums[q];
			
				if(sum< tar){
					p++;
				}
				else if(sum>tar){
					q--;
				}	
				else{
					ans.push_back({nums[i], nums[j], nums[p], nums[q]});
					p++;q--;
					
					while(p<q && nums[p] == nums[p-1]) p++;
				}
			}
			j++;
			while(j<n && nums[j]== nums[j-1]) j++;
		}
	}
	
	return ans;
}

int main(){

	vector<int> nums= {-2,-1,-1,1,1,2,2};
	int tar = 0;
	
	vector<vector<int>> result = fourSum(nums,tar);

    cout << "Unique Quadriplets that sum to 0:\n";
    for (auto trip : result) {
        cout << "[ ";
        for (auto val : trip) {
            cout << val << " ";
        }
        cout << "]\n";
    }


	return 0;
}

