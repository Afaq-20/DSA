#include<iostream>
#include<vector>
using namespace std;


void bubbleSort(int arr[],int n){
	
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
}

void selSort(int arr[],int n){
	
	for(int i=0;i<n-1;i++){
		int smallestIdx= i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[smallestIdx]){
				smallestIdx = j;
			}
		}
		swap(arr[i],arr[smallestIdx]);
	}
}

void insertSort(int arr[],int n){
	
	for(int i=1;i<n;i++){
		int current = arr[i];
		int previous= i-1;
		
		while(previous>=0&& arr[previous]>current){
			arr[previous+1] = arr[previous];
			previous--;
		}
		
		arr[previous+1] = current;
}
}
void print(int arr[], int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){

	int arr[]= {4,1,5,3,2};
	int n=5 ;
	
	insertSort(arr,n);
	print(arr,n);

	return 0;
}

