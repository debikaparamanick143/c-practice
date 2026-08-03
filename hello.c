#include<stdio.h>
void printhello (int count);

int main (){
    printhello (10);
    return 0;
}
//recursive function
void printhello (int count){
    if (count == 0){
        return;
    }
    printf ("HELLO WORLD \n");
    printhello (count -1);
}