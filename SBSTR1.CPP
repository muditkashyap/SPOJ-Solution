#include <iostream>
using namespace std;

int main() {	
	int a,b;
	
	while(24--){
		cin>>a>>b;
		std::string st_a = std::to_string(a);
		std::string st_b = std::to_string(b);
		
		if (st_a.find(st_b) != std::string::npos) {
		    std::cout << "1" << '\n';
		}
		else{
			std::cout << "0" << '\n';
		}
	}
	
	return 0;
}
