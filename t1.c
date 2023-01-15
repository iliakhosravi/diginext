#include<stdio.h>
#include<string.h>
void function(char s[],int n){
char f[n];
int i,x,c=0;
x=strlen(s);
for(i=0; i < n ;i++){
	f[i] = s[i%x];
		
}
for(i=0;i < n;i++){
	if(f[i]=='a'){
		c++;
	}
}
printf("%s",f);
printf("\n");
printf("%d",c);
	
}


int main(){
int n;
char s[2000];
scanf("%d", &n);
scanf("%s", s);	
function(s,n);

	
return 0;
}
