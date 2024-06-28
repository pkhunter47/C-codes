#include <iostream>
using namespace std;

void ShiftLeft(int *A, int k) {
	
	
		for(int j=0;j<6-k;j++){
			A[j]=A[j+k];
			
		}
	
	  for (int i =6-k; i<6; i++) {
        A[i] = 0;
    }
		
	
	for(int i=0;i<6;i++){
		cout<<A[i]<<" ";
	}
  
}

int main() {
    int A[6] = {10, 20, 30, 40, 50, 60};

    ShiftLeft(A, 3);

    

    return 0;
}

