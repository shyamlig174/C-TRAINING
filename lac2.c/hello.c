// Lecture 2 - C Programming
//topics: Variable, Operators, Type Casting, Increment-Decrement,If-Else
// Author: shyamli Bhurji
// Date: 26-Aug-2025

#include<stdio.h>

int main(){
     //1.Variables and Data Types
     int age = 20;
     float pi = 3.14;
     char grade = 'A';

     printf("Age = %d\n", age);
     printf("pi = %.2f\n", pi);
     printf("Grade = %c\n\n", grade);

     //2.Taking input from user
     int a;
     printf("Enter a number:");
     scanf("%d", &a);
     printf("You enterd: %d\n\n, a");

     //3.Arithmetic Operators
     int x = 10, y = 3;
     printf("x + y = %d\n", x + y);
     printf("x - y = %d\n", x - y);
     printf("x * y = %d\n", x * y);
     printf("x / y = %d\n", x / y);

     //4.Type Casting (to get decimal result in division)
     float result = (float)x / y;
     printf("Type casted division: %.2f\n\n", result);

     //5.Increment and Decrement
     int num = 5;
     printf("num = %d\n", num);
     printf("num++ = %d (post-increment)\n", num++);
     printf("Now num = %d\n", num);
     printf("++num = %d (pre-increment)\n", num);
     printf("Now num = %d\n\n", num);

     //6.If-Else Example 
     int marks = 73;
     if (marks >= 75){
        printf("Grade: A\n");
     }else if (marks >= 60){
        printf("Grade: B\n");
     }else {
        printf("Fail\n");
     }

     //7.sizeof operator 
     printf("\nSize of int = %zu bytes\n", sizeof(int));
     printf("Size of float = %zu bytes\n", sizeof(float));
     printf("Size of char = %zu bytes\n\n", sizeof(char));

     //8.ASCII Example
     int ascii = 65;
     char ch = ascii;
     printf("ASCII value %d = character '%c'\n", ascii, ch);

     return 0;
}