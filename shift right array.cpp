#include<iostream>
using namespace std;

void shiftright(int *a, int n){
	
	for(int i=n-1;i>0;i--){
		a[i]=a[i-1];
	
	
	}
	

	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
}

int main(){
	
	int a[6]={10,20,30,40,50,60};
	shiftright(a,6);
	
	
	
}
