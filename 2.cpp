#include <stdio.h>
#include <string.h>
int main(){
	char s[40];
	int i,dem=0;
	printf("Nhap chuoi: ");scanf("%s",&s[i]);
	for(i=0;i<strlen(s);i++){
       if(s[i]=='a'){
       	dem++;
	   }		
	}
	printf("Chuoi co %d chu a ",dem);
}
	
