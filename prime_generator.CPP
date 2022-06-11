#include <iostream>
using namespace std;
#include<math.h>

/*
	Problem URL: https://www.spoj.com/problems/PRIME1/
	Thanks me later - https://github.com/muditkashyap/SPOJ-Solution
*/



long int prime_number_checker(long int num){
	if(num==1){
		return false;
	}
	else if(num==2){
		return true;
	}
	for(int i=2;i<sqrt(num)+1; i++ ){
		if(num%i==0){
			return false;
		}
	}             
	return true;
}
int main(){	
	long int num,result,t;
	long int starting, ending;
	
	cin>>t;
	
	while(t--){
		cin>>starting;
		cin>>ending;
		
		for(starting;starting<=ending;starting++){
			result = prime_number_checker(starting);
			if(result){
				cout<<starting<<endl;	
			}                                        
		}
	}
	
	
	return 0;
}