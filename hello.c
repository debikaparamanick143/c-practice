#include<stdio.h>
#include<math.h>
int main (){
  int age;
  printf ("enter age");
  scanf ("%d", &age);

  if (age>18){
   printf ("adult \n");
   printf ("they can drive");
   printf ("they can vote \n");
   printf ("they can do everything \n");

  }
  else {
   printf ("not adult");
  }
   return 0;
}
