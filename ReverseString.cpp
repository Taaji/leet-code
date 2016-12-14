#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* reverseString(char* s) {
    int k;                  //for computing the length of the input string.
    int i;                  //counter
    int c = 0;              //for storing in new array
    
    char* d;                //new array
    
    k = strlen(s);
    strcpy(d, s);

	for(i = k - 1; i >= 0; i--){
		d[c] = s[i];
		c++;
	}
	return d;
}
