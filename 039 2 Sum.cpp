#include<iostream>
#include<vector> 
#include <unordered_map>

using namespace std;

vector<int> toSum(vector<int>& arr,int tar){
	unordered_map<int,int> m;
	vector<int> ans;
	
	for(int i=0; i<arr.size(); i++){
		int first = arr[i];
		int sec = tar - first;
		
		if(m.find(sec) != m.end()){
			ans.push_back(i);
			ans.push_back(m[sec]);
			break;
		}
		
		m[first] = i;
	}
	
	return ans;
}

int main(){

	vector<int> nums= {2,7,11,15};
	int target=17; 

    vector<int> ans = toSum(nums, target);

    for(int x : ans) {
        cout << x << " ";
    }
    cout << endl;
	
		
	return 0;
}

