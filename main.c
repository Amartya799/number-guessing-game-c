#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main() {
    
    int n;
	srand(time(0));
	n = rand()%100+1;
	int m;
    
    int i;
    i=0;
    printf("Guess the number (1 to 100)\n");
    while (1) {
        printf("enter your guess\n");
	    scanf("%d", &m);
        i++;
        if (m > n) {
            printf("too high, try again\n");

        } else if (m < n) {
            printf("too low,try again\n");
        } else {
            printf("congrats, you got it in %d tries\n", i);
            break;
        }
    }
	return 0;
}

