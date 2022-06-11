#include <iostream>
using namespace std;


int prime_number_checker(int num){
	for(int i=2;i<num; i++ ){
		if(num%i==0){
			cout<<"Test: "<<num<<endl;
			return 1;
		}
	}             
	return 0;
}
int main(){
	
	int num,result,t;
	int starting, ending;
	
	cin>>t;
	
	while(t--){
		cin>>starting;
		cin>>ending;
		
		for(starting;starting<=ending;starting++){
			result = prime_number_checker(starting);
			if(result==1){
				cout<<num<<endl;	
			}                                        
		}
	}
	
	
	return 0;
}