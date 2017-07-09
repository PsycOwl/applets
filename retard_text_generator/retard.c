#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char input[500];
    char output[500];
    fgets(input, 500, stdin);
    int i,r;
    for(i = 0; i < 500; i++){
        r = rand() % 101;
        if (isspace(input[i])){
		output[i] = input[i];
	}
	else{
		if(r < 65){
		    output[i] = toupper(input[i]);
		}
		else {
		    output[i] = tolower(input[i]);
		}
	}
    }
    printf("%s",output);
    return 0;
}
