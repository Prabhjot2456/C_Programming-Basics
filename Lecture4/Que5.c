#include<stdio.h>
int main(){
    int a = 5, b;
    b = a++ + ++a;   // (5+6+1)
    printf("%d\n", a);
    printf("%d", b);
}

//Extra info
#include<stdio.h>
int main(){
    int a = 5, b = 5;
    int c = a++ + ++b;
    printf("\n %d", c);
}