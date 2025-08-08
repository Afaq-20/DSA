#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> vec){
	for(int val:vec){
	cout<<val<<" ";
	}
	cout<<endl;
}

int main(){
	
	vector<int> vec= {1,2,3};
	
	cout<<"Actual Vector: ";
	print(vec);
	cout<<"Size of Vector: "<<vec.size()<<endl;
	
	
	vec.push_back(25);
	cout<<"After Push Back: ";
	print(vec);
	
	
	vec.pop_back();
	cout<<"After Pop Back: ";
	print(vec);
	
	
	cout<<"Front Vector: "<<vec.front()<<endl;
	cout<<"Last Vector: "<<vec.back();

	
	return 0;
}
