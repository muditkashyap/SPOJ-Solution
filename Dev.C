#include <stdio.h>
int main(){
	int n;
	while(true)
    {
        scanf("%d",&n);
        if(n==42){
        	break;
		}
		else{
			printf("%d \n",n);
		}
    }
    return 0;
}