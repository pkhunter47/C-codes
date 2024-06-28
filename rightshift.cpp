#include<bits/stdc++.h> 
using namespace std;

void printList(int *a, int n)
{
for(int i =0 ; i<n ; i++){

cout<<*(a+i)<<" ";

}

}


void rightshift(int *a, int n){
    cout<<endl;
for(int i =n ; i>=0 ; i--){

a[i] = a[i-1];

}



}



int main(){

int a[5] = {10, 20 , 30, 40, 50};
printList(a, 5);
rightshift(a, 5);
printList(a, 5);


return 0;
}
