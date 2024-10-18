#include<iostream>
using namespace std;

int maxsize=50;
int tree[50];

void checkindex(){
	for(int i=0;i<maxsize;i++){
		
		 tree[i]=-1;
	}
	
}
void insert(int value){
	int index=0;
	while(true){
		if(tree[index]==-1){
			tree[index]=value;
			cout<<"value "<<value<<" found at index "<<index<<endl;
			break;
		}
		else if(value<tree[index]){
			index= 2*index+1;
		}
		else{
			index=2*index+2;
		}
		
	}
	
}
void inorder(int index){
	if(index<maxsize && tree[index]!=-1){
		inorder(2*index+1);
		cout<<tree[index]<<" ";
		inorder(2*index+2);
	}
	
}

void postorder(int index){
	if(index<maxsize && tree[index]!=-1){
		postorder(2*index+1);
		postorder(2*index+2);
		cout<<tree[index]<<" ";
		
	
	}
}
	
void preorder(int index){
	if(index<maxsize && tree[index]!=-1){
		
		cout<<tree[index]<<" ";
		preorder(2*index+1);
		preorder(2*index+2);
	
	}
	
	
}
void search(int item,int index){
	if(index<maxsize && tree[index]!=-1){
		if(item==tree[index]){
			cout<<"item "<<item<<" was found at index "<<index<<endl;
		}
	
	else if(item<tree[index]){
		search(item,2*index+1);
		
	} 
	else{
		search(item,2*index+2);
	}
	
	
	
	}
	
	
	
	
}



int main(){
	checkindex();
	insert(45);
	insert(40);
	insert(56);
	insert(99);
	insert(21);
	insert(29);
	insert(43);
	insert(40);
	insert(23);
	insert(90);
	search(23,0);
	
	postorder(0);
	cout<<endl;
	inorder(0);
	
	
	
}
