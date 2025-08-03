# include <iostream>
using namespace std;

//Reverse Array

void reverse(int arr[],int size){
	int start=0, end=size-1;
	
	while(start<end){
		swap(arr[start],arr[end]);
		
		start++;
		end--;
	}
}
///////////////////////////////////////////


//Linear Search

int LinearSearch(int arr[],int size,int x){
	
	for(int i=0;i<size;i++){
		if(arr[i]==x){
			return i;
		}
	}
	return -1;
}
//////////////////////////////////////////////

int main(){
	
	int size= 7;
	int arr1[]= {3,7,1,8,4,-35,67};
	int smallest= INT_MAX;
	
	for(int i=0;i<size;i++){
		if(arr1[i]<smallest){
		smallest= arr1[i];
		}
	}
	cout<<"Smallest Number is: "<<smallest<<endl;
	
	int x= 8;
	
	cout<<"Index of targeted Value: "<<LinearSearch(arr1,size,x);
	
	cout<<"Reversed array: ";
	reverse(arr1,size);
	for(int i=0; i<size;i++){
		cout<<arr1[i];
	}
	
	return 0;
}
