#include<bits/stdc++.h>
using namespace std;

int main(){

    srand(time(0));
       ofstream fout("10k.txt");
        for(int i =0 ; i<10000; i++){
             int a = rand()%10000+1;
             fout<<a<<endl;
        }

return 0;
}

