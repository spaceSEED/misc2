#include <stdio.h>
#include <time.h>

time_t getTime(){
	time_t t;
	time(&t);
	return t;
}

void setTimer(int d){
	time_t start;
	printf("Timer set for %d seconds.\n",d);
	time(&start);
	while((int)difftime(getTime(),start)<d){
	//i can implement "time is almost up" warning here if id like
	}
	printf("Time is up!!!\n%d seconds have passed!\n",d);
}

int main(int argc, char ** argv){

	char * p=argv[argc-1];
	char * tmp=malloc(sizeof(argv[argc-1]));
	char *q=tmp;
	while(*p!='\0'){
		p++;
	}
	p--;
	int t=0;int e=1;
	while(p!=argv[argc-1]){
		t+=(*p-'0')*e;
		e*=10;
		p--;
	}
		t+=(*p-'0')*e;
	setTimer(t);

	return 0;
}
