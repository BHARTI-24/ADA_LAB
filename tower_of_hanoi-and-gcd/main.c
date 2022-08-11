//Write a recursive program to
// a. Solve Towers-of-Hanoi problem b. To find GCD


#include<stdio.h>
#include<stdlib.h>

void towerOfHanoi(int , char, char, char);
int gcd(int , int);

int main(){
    int ch;
    while(1){
        printf("\n\n Enter the options:> \n \t1. Tower of hanoi\n\t2.GCD of two numbers\n\t3.Exit\n\t :> ");
        scanf("%d", &ch);
        
        if(ch == 1){
            printf("\n\t Tower of hanoi\n");
            int n;
            printf("Enter the number of disks :> ");
            scanf("%d", &n);
            towerOfHanoi(n, 'A', 'C', 'B');
        }
        else if(ch == 2){
            printf("\n\t GCD of two numbers\n");
            int num1, num2;
            printf("\nEnter two positive integers:> ");
            scanf("%d %d", &num1, &num2);
            printf("\nThe gcd of two positive numbers %d and %d is %d.", num1, num2, gcd(num1, num2));
        }
        else if(ch == 3){
            exit(0);
        }
        else{
            printf("\nInvalid option select! Please select correct option");
        }
        printf("\n\n");
    }
}


void towerOfHanoi(int n, char S , char T, char D){
    if(n == 1){
        printf("Move disk 1 from rod %c to rod %c\n",S,D);
        return;
    }
    towerOfHanoi(n-1,S,D,T);
    printf("Move disk %d from rod %c  to rod  %c \n", n,S, D );
    towerOfHanoi(n-1, T,S,D);
}

int gcd(int n1, int n2){
    if(n2 != 0)
    return gcd(n2,n1%n2);
    else 
    return n1;
}



