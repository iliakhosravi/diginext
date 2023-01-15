#include <stdio.h>
#include <string.h>
void function(char str[]){
	fgets(str, 2000, stdin);
	int i = 0, counter = 0;
	while(i<strlen(str)-1){
	    if (str[i]==str[i+1]){
        counter++;
    	}
    	i++;
	}
	printf("%d",counter);
}

int main(){

	char hi[2000];
	function(hi);    
    return 0;

}

