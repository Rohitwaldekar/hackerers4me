#include <stdio.h>
int sumOfElements(int N);                   // Function for sum from 1 to N numbers
int main()
{
int no1;// N is even
int no2;// N is odd
int sum=0;
printf("Enter Value of N :");
scanf("%d",&no1);
sum=sumOfElements(no1);                     // Function call
printf("Sum from 1 to no1 elements :");
printf("%d\n\n",sum);

printf("Enter Value of N :");
scanf("%d",&no2);
sum=sumOfElements(no2);                     // Function call
printf("Sum from 1 to no2 elements :");
printf("%d\n",sum);

return 0;
}

int sumOfElements(int N)
{
    int sum=0;
    int midElement=N/2;                    // Find middle element
    if(1==N%2)                             // If N is even number
        sum=N*(midElement+1);
    else                                   // If N is odd number
        sum=(N+1)*midElement;

    return sum;
}
