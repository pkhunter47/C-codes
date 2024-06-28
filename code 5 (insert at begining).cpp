#include<bits/stdc++.h>
using namespace std;

void printList(int *a, int n)
{
for(int i =0 ; i<n ; i++){

cout<<a[i]<<" ";

}
cout<<endl;
}

void insertAtBegin(int *p , int n, int k){
   int *b= new int[n+1];
   b[0] = k;

   for(int i =0 ; i<n ; i++){
   b[i+1] = p[i];

        }

   printList( b , n+1);

}


int main(){

int a[5] = {10, 20 , 30, 40, 50};
printList(a, 5);
insertAtBegin(a, 5 , 100);



return 0;
}




