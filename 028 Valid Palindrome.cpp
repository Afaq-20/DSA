#include<iostream>
#include<string>
#include<algorithm>
 
using namespace std;

bool AlphaNum(char ch){
	if((ch >= '0' && ch <= '9') || 
		(tolower(ch) >= 'a' || tolower(ch) <='z')){
		
		return true;
	}
	return false;
}

bool Palindrome(string str){
	int start=0, end= str.length()-1;
	
	while(start<=end){
		if(!AlphaNum(str[start])){
			start++;
			continue;
		}
		if(!AlphaNum(str[end])){
			end--;
			continue;
		}
		if(tolower(str[start]) != tolower(str[end])){
			return false;
		}
		
		start++; end--;
	}
}

int main(){

	string str= "racecar";
	

	if(Palindrome(str) == true){
		cout<<"This is a Valid Palindrome.";
		
	}	
	else{
		cout<<"This is not a Valid Palindrome.";
	}
	
	return 0;
}

