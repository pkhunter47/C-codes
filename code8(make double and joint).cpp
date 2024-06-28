#include<bits/stdc++.h>
using namespace std;

void printList(int *a, int n)
{
for(int i =0 ; i<n ; i++){

cout<<a[i]<<" ";

}
cout<<endl;
}


int * makedouble(int *p, int n){
int *a=new int[n];
for(int i = 0; i<n; i++)
     a[i] = p[i]*2;
 

     return a;
}


int * joint(int *a , int *b , int n){
int *c = new int [n+n];
for (int i =0; i<n; i++) {
c[i] = a[i];}
for (int i =0, j =n; i<n, j<2*n; i++, j++) {

c[j] = b[i];	
}

return c;
}





int main(){
int a[5] = {10, 20 , 30, 40, 50};
printList(a, 5);
int *b = makedouble(a, 5);
printList(b, 5);
int *j = joint(a,b,5);
printList(j,10);


return 0;
}







