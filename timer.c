#include <stdio.h>
#include <time.h>

time_t getTime(){
	time_t t;
	time(&t);
	return t;
}

void setTimer(int d){
	time_t start;
	time(&start);
	printf("Timer set for %d seconds",d);
	while((int)difftime(getTime(),start)<d){
	//i can implement "time is almost up" warning here if id like
	}
	printf("Time is up!!!\n%d seconds have passed!",d);
}

int main(int argc, char ** argv){

	char * p=argv[argc-1];
	char * tmp=malloc(sizeof(argv[argc-1]));
	char *q=tmp;
	while(*p!='\0'){
		p++;
	}
	p--;
	while(*p!=argv[argc-1]){
		*q=*p;
		q++;
		p--;
	}
	*q=*p;q++;*q='\0';
	p=tmp;
	int t=0;int e=1;
	while(*p!='\0'){
		t+=(*p-'0')*e;
		e*=10;
		p++;
	}
	setTimer(t);

	return 0;
}
