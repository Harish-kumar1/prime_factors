/*The following program determines the prime factors of a positive integer entered by the user using a general purpose function*/
/*Author: Harish Kumar Date: 09-02-2021*/

# include <stdio.h>

/*Function prototype declaration*/
void prime_fac(int);

int main()
{
 /*Type declaration*/
 int num;
 
 /*Obtaining input from the user*/
 printf("Please enter a positive integer:\n");
 scanf("%d", &num);
 
 /*Function call*/
 prime_fac(num);
 
 return 0;
}

/*Function definition*/
void prime_fac(int num)
{
 /*Type declaration*/
 int x;
 
 /*Loop to run through numbers from 2 to check for exactly divisible number*/
 for(x = 2; x <= num; x++)
 {
  if(num % x == 0)
  {
   printf("%d\n", x);
   prime_fac(num / x);
   break;
  }
 }
}
