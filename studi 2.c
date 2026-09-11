#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
float A,B,C,D,E;
scanf("%f %f", &A, &B);
C=A+B;
D=A-B;
E=A*B;
if(C>E && C>D){
printf("+"); }
else if(E>D && E>C){
printf("*");}
else if(D>E && D>C){
printf("-");
}
    return 0;
}
