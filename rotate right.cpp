/*#include<iostream>
using namespace std;

void rotateright(int *a, int n,int k){
	for(int j=n-1;j>k;j--){
		int t=a[n-1];
	
	for(int i=n-1;i>0;i--){
		a[i]=a[i-1];
	
	
	}
	a[0]=t;
}
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
}

int main(){
	
	int a[6]={10,20,30,40,50,60};
	rotateright(a,6,4);
	
	
	
}*/
/*#include<bits/stdc++.h>
using namespace std;

printarray(int *a,int S){
for(int i=0;i<S;i++){
		cin>>a[i];
	}
	cout<<"the array is:"<<endl;
	for(int i=0;i<S;i++){
		cout<<a[i]<<" ";
	

	
	
}
cout<<endl;
}
 void shiftleft(int *a,int s, int k){
	for(int i=0;i<k;i++){
		for(int j=0;j<s;j++){
			a[j]=a[j+1];
		}
		
	}
	for(int i=0;i<s;i++){
		cout<<a[i]<<" ";
	}
	
	
}
int main(){
	
	cout<<"enter the size of an array:"<<endl;
	int s;
	cin>>s;
	int a[s];
	
	cout<<"enter ur array numbers:"<<endl;
	printarray(a,s);
	
	int k;
	cout<<"enter the number of shifts: ";
	cin>>k;
	
	
	shiftleft(a,s,k);	
	
}*/
#include<bits/stdc++.h>
using namespace std;

void print(int *arr, int n){
	cout<<"enter the arrays:"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	
}
void newelement(int *arr,int n){
	//int *c=new int(n+1);
	for(int i=n;i>=0;i--){
		arr[i]=arr[i-1];
	}
	n++;
	int k;
	cout<<"put new element:";
	cin>>k;
	arr[0]=k;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	
}


int main(){
	
	int n;
	cout<<"enter the size of an array:"<<endl;
	cin>>n;
	
	int arr[n];
	print(arr,n);
	newelement(arr,n);

	
	
	
}





























































