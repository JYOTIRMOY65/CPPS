//Program Name: Function to find the largest of three numbers
//Program Date: 26/09/24    Author: Jyotirmoy Bhuyan
#include <stdio.h>
int findLargest(int a, int b, int c) {
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}
int main() 
{
    int num1, num2, num3, largest;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    largest = findLargest(num1, num2, num3);
    printf("The largest number is: %d\n", largest);
}

