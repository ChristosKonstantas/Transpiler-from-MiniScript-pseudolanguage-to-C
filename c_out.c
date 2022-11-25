#include "mslib.h"

/* Program */ 

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>


double limit , num , counter ;
 int prime(double n) {
double i;
 int result , isPrime;
 return result ;

} 
void main(){
limit=readNumber();
counter=0;
 num=2;
 while(num<=limit) {
	if(prime (num)) {
	counter=counter + 1;
 writeNumber(num);
writeString(" ");
} 
 num=num + 1;
 } 
writeString("\n");
writeNumber(counter);
 

} 


