#include<stdio.h>

int main() {
    char grade;
    printf("Enter grade(A,a,B,b,C,D) : ");
    scanf("%c", &grade);

    switch(grade){
        case 'A' : 
        case 'a' : 
             printf("Excellent \n");
             break;
        case 'B' : 
        case 'b' : 
              printf("Good \n");
              break;
        case 'C' :
        case 'D' :
              printf("Needs Improvement \n");
              break;
        default :
              printf("Invalid Grade \n");
    }

    return 0;
}