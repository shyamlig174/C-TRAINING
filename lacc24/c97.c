#include<stdio.h>
#include<string.h>

struct Address
{
    int pincode;
};

struct student {
    char name[50];
    int RollNo;
    int age;
    struct Address s2;
};

int main(){
    struct student s1;

    s1.age = 15;
    s1.s2.pincode=482001;

    printf("age: %d\n", s1.age);
    printf("name: %s\n",s1.s2.pincode);

    return 0;
}