#include <iostream>
using namespace std;

/*
	Problem URL: https://www.spoj.com/problems/TEST/
	Thanks me later - https://github.com/muditkashyap/SPOJ-Solution
*/

int print(int n){
	if(n==42){
		return 0;
	}
	else{
		cout<<n<<endl;
		cin>>n;
		print(n);
	}
		
}

int main() {
	
	int n;
	
	cin>>n;
	print(n);
	
	

	return 0;
}
