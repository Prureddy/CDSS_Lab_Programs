FOR LOOP: 
#include<stdio.h> //using for loop 
int main() 
{int i,fact=1,number; 
printf("Enter a number: "); 
scanf("%d",&number); 
for(i=1;i<=number;i++){ 
fact=fact*i; 
}printf("Factorial of %d is: %d",number,fact); 
return 0;} 
 
 
 
 
RECURSION: 
#include<stdio.h> // using Recursion 
long factorial(int n) 
{if (n == 0) 
return 1; 
else 
return(n * factorial(n-1)); 
} 
void main() 
{int number; 
long fact; 
printf("Enter a number: "); 
scanf("%d", &number); 
fact = factorial(number); 
printf("Factorial of %d is %ld\n", number, fact); 
return 0; 
} 
DO WHILE: 
#include<stdio.h> // using do-while loop 
void main() 
{int n,i=1,f=1; 
printf("\n Enter The Number:"); 
scanf("%d",&n); 
do 
{f=f*i; 
i++; 
}while(i<=n); 
printf("\n The Factorial of %d is %d",n,f); 
}
