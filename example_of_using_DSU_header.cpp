#include<iostream>
#include"DSU.h"
using namespace std;

int main(){
	
	DSU mydsu;
	
	mydsu.Insert(1);
	mydsu.Insert(2);
	mydsu.Insert(3);
	mydsu.Insert(4);
	mydsu.Insert(5);
	mydsu.Insert(6);
	
	mydsu.Unite(1,2);
	mydsu.Unite(1,3);
	mydsu.Unite(1,4);
	mydsu.Unite(5,6);
	
	if(mydsu.Same(1,5))cout<<"1 and 5 are in the same set!!!\n";
	else cout<<"1 and 5 aren't in the same set!!!\n";
}
