#include<iostream>
#include<vector>
using namespace std;

int kandane(vector<int>& vec){
	int currSum= 0;
	int maxSum= INT_MIN;
	
	for(int val:vec){
		currSum += val;
		maxSum = max(currSum,maxSum);
		
		if(currSum<0){
			currSum= 0;
		}
	}
	return maxSum;
}

int main(){
	
	vector<int> vec= {3,-4,5,4,-1,7,-8};
	
	cout<<"Maximum Subarray of the Vector= "<<kandane(vec);
}
