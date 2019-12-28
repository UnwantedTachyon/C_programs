#include <stdio.h>
#include <stdlib.h>

int main() {
    int numL = 1; 
    int numH = 10;
    
    for(int number = numL; number < numH; number++){
	if(number==2){
	    printf("%d\n", number);
	}
	else if(number>1){
	    for(int j = 2; j < number; j++){
	       if(number%j == 0){
	           break;
	       }
               else{
	           printf("%d\n", number);
		   break;
	       }
	    }
	}
    }
    return 0;
}
