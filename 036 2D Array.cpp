#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int diagonalSum(int mat[][3],int n){
	int sum= 0;
	
	for(int i=0; i<n; i++){
		
		sum += mat[i][i];
		
		if(i != n-i-1){
			sum += mat[i][n-i-1];
		}
	}
	
	return sum;	
}


int getSum(int arr[][3], int rows, int col){
	
	int maxSum= INT_MIN;
	
	for(int i=0; i<rows; i++){
		int sumOfRows= 0;
		
		for(int j=0; j<col; j++){
			sumOfRows += arr[i][j];
		}
		
		maxSum= max(maxSum,sumOfRows);
	}
	
	return maxSum;
}

int main(){

	int arr[4][3];
	int mat[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
	int n=3;
	
	int rows= 4;
	int col=3;

		
	for(int i=0; i<rows; i++){
		
		for(int j=0; j<col; j++){
			cin>>arr[i][j];
		}		
	}
	
	
	for(int i=0; i<rows; i++){
		
		for(int j=0; j<col; j++){
			cout<<arr[i][j]<<" ";
		}
		
		cout<<endl;
	}
	
	cout<<endl<<getSum(arr,rows,col);
	cout<<endl<<diagonalSum(mat,n);
	
	
	return 0;
}

