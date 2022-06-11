#include <iostream>
using namespace std;

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
