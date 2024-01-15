#include<iostream>
#include<math.h> 
#include<stdlib.h> 
#include<conio.h>
#include<stdio.h> 

using namespace std;

void add();  
void sub();  
void multi();  
void division();  
void sqr();  
void srt();  
void percentage();
void exit();  
int  main()  
{  
int ch;  
do  
{  
cout<<" Select the arthimatic operator\n1. add\n2. Sub\n3. Multi\n4. Div\n5. Squ\n6. Sqrt\n7. percentage\n8. Exit\nMake a choice: ";  
   cin >> ch;  
  switch (ch)  
     {  
    case 1:  
    add();   
    break;  
    case 2:  
    sub();   
    break;  
    case 3:  
    multi();
    break;  
    case 4:  
    division();
    break;  
    case 5:  
    sqr(); 
    break;  
    case 6:  
    srt();  
    break;  
    case 7:
    percentage();
    break;
    case 8:  
    exit(0);  
    break;  
    default:  
    cout <<"Something is wrong..!!";  
    break;  
    }  
    cout <<" \n------------------------------\n";  
    }while(ch != 8);  
    getch();  
    }  
  
void add()  
{  
int n, sum = 0, i, number;  
cout <<"How many numbers you want to add: ";  
cin >> n;  
cout << "Please enter the number one by one: \n";  
for (i = 1; i <= n; i++)  
{  
cin >> number;  
sum = sum + number;  
}  
cout << "\n Sum of the numbers = "<< sum;  
}  
void sub()  
{  
int num1, num2, z;  
cout <<" \n Enter the First number = ";  
cin >> num1;  
cout << "\n Enter the Second number = ";  
cin >> num2;  
z = num1 - num2;  
cout <<"\n Subtraction of the number = " << z;  
}  
void multi()  
{  
int num1, num2, multi;  
cout <<" \n Enter the First number = ";  
cin >> num1;  
cout << "\n Enter the Second number = ";  
cin >> num2;  
multi = num1 * num2;  
cout <<"\n Multiplication of two numbers = " << multi;  
}  
void division()  
{  
int num1, num2, div = 0;  
cout <<" \n Enter the First number = ";  
cin >> num1;  
cout << "\n Enter the Second number = ";  
cin >> num2;  
while ( num2 == 0)  
     {  
        cout << "\n Divisor canot be zero"  
         "\n Please enter the divisor once again: ";  
         cin >> num2;  
         }  
div = num1 / num2;  
cout <<"\n Division of two numbers = " << div;  
}  
void sqr()  
{  
int num1;  
float sq;  
cout <<" \n Enter a number to find the Square: ";  
cin >> num1;  
sq = num1 * num1;  
cout <<" \n Square of " << num1<< " is : "<< sq;  
}  
void srt()  
{  
float q;  
int num1;  
cout << "\n Enter the number to find the Square Root:";  
cin >> num1;  
q = sqrt(num1);  
cout <<" \n Square Root of " << num1<< " is : "<< q;  
}  
void percentage()
{
float a;
int num1,num2;
cout << " \n enter the number to find the 1st percentage ";
cin >> num1;

cout << " \n enter the number to find the 2nd percentage ";
cin>> num2;

{
	a = ((num1/100*num2));
}
cout << " \n percentage of "<< a <<"is  "<< a;
}
