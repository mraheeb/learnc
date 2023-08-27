#include<stdio.h>
int main(int argc, char *argv[]){
if(argc!=3){
	printf("Usage ./program firstname secondname");
}
else{
	printf("hello %s %s",argv[1],argv[2]);
	}
	return 0;
}
