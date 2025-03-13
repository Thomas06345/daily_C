/*Write a C program that defines a function multiply() which takes two integers as parameters and returns their product. Call this function in main() and display the result.
*/
#include <stdio.h>
int multiply(int,int);
int main() {
    int num1,num2,product;
    printf("enter the two numbers\n");
    scanf("%d%d",&num1,&num2);
    product= multiply( num1, num2);
    printf("product of two numbers %d*%d=%d",num1,num2,product);
    return 0;

}

int multiply(int num1,int num2) {
    return num1 * num2;
}