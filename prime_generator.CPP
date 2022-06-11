#include <iostream>
using namespace std;
#include<math.h>

/*
	Problem URL: https://www.spoj.com/problems/PRIME1/
	Thanks me later - https://github.com/muditkashyap/SPOJ-Solution
*/



long int prime_number_checker(long int num){
	if(num<=1){
		return false;
	}
	else if(num==2){
		cout<<num<<endl;                         
		return 0;	
	}
	else if (num % 2 == 0){
        return false;
    }        
    else{
    	int seprator = 3;
		while(seprator <= sqrt(num)+1){
			if(num%seprator==0){
				return false;
			}
			seprator +=2;
		}
	
		cout<<num<<endl;                         
		return 0;	
	}
    
}
int main(){	
	long int num,result,t;
	long int starting, ending;
	
	cin>>t;
	
	while(t--){
		cin>>starting>>ending;
		
		for(starting;starting<=ending;starting++){
			prime_number_checker(starting);
		}
	}
	
	
	return 0;
}

//2.36