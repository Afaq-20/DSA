#include<iostream>
#include<vector>
#include<string>
#include<unordered_set>
using namespace std;

vector<int> findMissingAndRepeatingValues(vector<vector<int>>& grid){
	vector<int> ans;
	unordered_set<int> s;
	int n =grid.size();
	int a,b;
	
	int expSum = 0, actualSum=0;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			actualSum +=grid[i][j];
			
			if(s.find(grid[i][j]) != s.end()){
				a= grid[i][j];
				ans.push_back(a);
			}
			s.insert(grid[i][j]);
		}
	}
	
	expSum = (n*n) * (n*n + 1) /2 ;
	b= expSum + a - actualSum;
	ans.push_back(b);
	
	return ans;
}

int main(){

	vector<vector<int>> grid= {{8,5,4},{1,1,2},{6,9,7}};

    vector<int> ans = findMissingAndRepeatingValues(grid);

    	cout<<"First is Repeating and second is Missing Value"<<endl;
    for(int x : ans) {
		cout<< x <<" ";
    }
    cout << endl;
	
	return 0;
}

