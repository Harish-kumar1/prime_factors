/*The following program determines the prime factors of a positive integer entered by the user using a general purpose function*/
/*Author: Harish Kumar Date: 09-02-2021*/

# include <stdio.h>

/*Function prototype declaration*/
void prime_fac(int);

int main()
{
 /*Type declaration*/
 int n;
 
 /*Obtaining input from the user*/
 printf("Please enter a positive integer:\n");
 scanf("%d", &n);
 
 /*Function call*/
 prime_fac(n);
 
 return 0;
}

/*Function definition*/
void prime_fac(int x)
{
 /*Loop to find one part of the prime factors in case the number is even*/
 while(x % 2 == 0)
 {
  x = x / 2;
  printf("2\n");
 }
 
 /*Loop to find one part the prime factors in case the number is divisible by 3*/
 while(x % 3 == 0)
 {
  x = x / 3;
  printf("3\n");
 }
 
 /*Loop to find one part of the prime factors in case the number is divisible by 5*/
 while(x % 5 == 0)
 {
  x = x / 5;
  printf("5\n");
 }
 
 /*Loop to find one part of the prime factors in case the number is divisible by 7*/
 while(x % 7 == 0)
 {
  x = x / 7;
  printf("7\n");
 }
 
 /*Condition to check if x has been decomposed to 1 and print it if not the case*/
 if(x != 1)
  printf("%d\n", x);
}
