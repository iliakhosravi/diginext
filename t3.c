#include<stdio.h>
void function(int a[], int size){
	int i,j,count=0;
	for(i = 0 ; i < size ; i++){
		if(a[i] != i + 1){
			for(j = i + 1; j < size ;j++){
				if(a[i] == j+1){
					a[j] = a[i];
				}
			}
			a[i] = i+1;
			count++;
		}
			
	}
	printf("%d", count);
	
	
	
}
int main(){
	int size, i;
	scanf("%d", &size);
	int a[size];
	for(i = 0; i < size ;i++){
		scanf("%d", &a[i]);
	}
	function(a, size);
	
	
	
	return 0;
}
