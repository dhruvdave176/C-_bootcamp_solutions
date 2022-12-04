//
//  main.cpp
//  C++_bootcamp_solutions
//
//  Created by Dhruv Dave on 31/07/22.
//
//
//============================================
//Assignment-1 Basics of input and output
//============================================

#include <iostream>
#include<stdio.h>
#include<math.h>
//1. WAP to print Hello students on the screen
/*
int main() {
    printf("\nHello Students\n");
    return 0;
}
 */

//2. WAP to print Hello in the first line and Students in the second line
/*
int main() {
    printf("\nHello\nStudents\n");    //\n basically works as a new line escape sequence.
    return 0;
}
 */

//3. WAP to print "MySirG" on screen, with double quotes
/*
int main() {
    printf("\n\"MySirG\"\n");    //character after \ is usually printed out and is not taken as a special character
    return 0;
}
*/

//5. WAP to calculate length of string using printf function
/*
int main() {
    int len;
    len=printf("String\n");    //printf() function returns length of string including escape sequence. backslash is used aqs excape sequence character and then comes pre-defined alphabets. this is not counted
    printf("The length of the string is %d\n",len);
    return 0;
}
*/

//6. WAP to print the name of the user in double quotes
/*
int main(){
    printf("\"Dhruv Dave\"\n");
    return 0;
}
*/

//7. WAP to print %d on the screen
/*
int main(){
    printf("%%d\n");    //a % requires two % to be printed once
    return 0;
}
*/

//8. WAP to print \n on the screen
/*
int main(){
    printf("\\n\n");    //a \n requires two \ to be printed once
    return 0;
}
*/
//9. WAP to print \\ on the screen
/*
int main(){
    printf("\\\\");    //a \\ requires two \\\\ to be printed once
    return 0;
}
*/

//10. WAP to take date as an input in below given format and convert the time format and display the result as : User input date format - DD/MM/YYYY Output format : Day - DD, Month - MM, Year - YYYY "

/*
int main(){
    int date,month,year;
    printf("Enter date, month, year in the format of DD/MM/YYYY\n");
    scanf("%d/%d/%d",&date,&month,&year);    //in scanf() user is required to fill it with /
    printf("Day - %d, Month - %d, Year - %d\n",date,month,year);
    return 0;
}
*/

//11. input format : "HH:MM" Output format : "HH Hour and MM minute"
/*
 int main(){
    int hour,minutes;
    printf("Enter hour, minutes in the format of HH:MM\n");
    scanf("%d:%d",&hour,&minutes);    //in scanf() user is required to fill it with :
    printf("%d Hour and %d Minute \n",hour,minutes);
    return 0;
}
 */

//12. find output of below code
/*
int main(){
    int x = printf("ineuron");
    printf("%d",x);
    return 0;
}
 */

//=====================================================
//Assignment2 : operators in C language
//=====================================================

//1. WAP to print unit digit of a given number
/*
int main()
{
    int num;
    printf("Enter any digit number to print unit digit of it : \n");
    scanf("%d",&num);
    num=num%10;  //module 10 will always extract us 1 last unit digit. %100 will extract us last 2 units place and then 1000 and so on
    printf("The unit's place digit is : %d\n",num);
    return 0;
}
*/


//2. WAP to print given number without its last digit
/*
int main()
{
    int num,last_digit;
    printf("Enter any digit number to print it again without its last digit: \n");
    scanf("%d",&num);
    last_digit=num%10;  //module 10 will always extract us 1 last unit digit. %100 will extract us last 2 units place and then 1000 and so on
    num=num-last_digit;
    printf("The unit's place digit is : %d\n",num);
    return 0;
}
*/

//3. WAP to swap values of two int variables
/*
int main()
{
    int a,b,c;
    printf("Enter any 2 numbers a and b to swap : \n");
    scanf("%d%d",&a,&b);
    printf("\nThe values are a = %d and b = %d \n",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nAfter swap, The values are a = %d and b = %d \n",a,b);
    return 0;
}
*/


//4. WAP to swap values of two int variables without using a third variable
/*
 int main()
{
    int a,b;
    printf("Enter any 2 numbers a and b to swap : \n");
    scanf("%d%d",&a,&b);
    printf("\nThe values are a = %d and b = %d \n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swap, The values are a = %d and b = %d \n",a,b);
    return 0;
}
*/
//5. WAP to input a 3 digit number and then display the sum of the digits
/*
 int main()
{
    int num,units,tens,hundreds;
    printf("Enter a 3 digit number : \n");
    scanf("%d",&num);
    units=num%10;
    num=num/10;
    tens=num%10;
    num=num/10;
    hundreds=num%10;
    printf("The sum of the digits of a 3 digit number is : %d\n",units+tens+hundreds);
    return 0;
}
*/

//6. WAP which takes a character as an input and displays its ASCII code
/*
 int main() {
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);
    printf("\nThe character entered is : %c\n",ch);
    printf("\nThe ASCII code of the character entered is : %d\n",ch);
    return 0;
}
*/

//7. WAP to find first position of first 1 in LSB
/*
int main(){
    int num,compare_int=1,iter=1;
    
    printf("Enter a binary number to find the first 1 from the LSB:\n");
    scanf("%d",&num);
    
    while(num>0){
        if((compare_int&num)==1){
            printf("\nThe first 1 from the LSB comes at %d position\n",iter);
            break;
        }
        num=num>>1;
        //printf("\n num pos is : %d",num);
        iter+=1;
    }
}
*/

//8. WAP to check entered number is even or odd
/*
int main(){
    int num;
    printf("\nEnter a Number to check whether it is even or odd :\n");
    scanf("%d",&num);
    if((num&1)==1)
        printf("\nEntered number is an odd number\n");
    else
        printf("\nEntered number is an even number\n");
    
    return 0;
}
*/

//9. WAP to print size of an int, float, char and double type of variable
/*
int main(){
    printf("\nThe size of int is %zu",sizeof(int));  //the result of sizeof() operator is size_t , so using format specifier as %zu
    printf("\nThe size of a float is %zu",sizeof(float));
    printf("\nThe size of an char is %zu",sizeof(char));
    printf("\nThe size of an double is %zu\n",sizeof(double));
    printf("\nthe size of size_t is %zu\n",sizeof(size_t));
    return 0;
}
*/

//10. WAP to make the last digit of a number stored in a variable as 0. E.g: 2345 will be 2340
/*
int main(){
    int num;
    printf("\nEnter a number : ");
    scanf("%d",&num);
    num=num/10;
    num=num*10;
    printf("\nThe result is %d\n",num);
    return 0;
}
*/

//11. WAP to input a number from the user and also a digit. Append the digit in the number entered and print the resulting number
/*
 int main(){
    int num,digit;
    printf("\nEnter a num : ");
    scanf("%d",&num);
    printf("\nEnter a digit : ");
    scanf("%d",&digit);
    num=num*10;
    num=num+digit;
    printf("\nThe resultant number with digit appended is %d\n",num);
    return 0;
}
*/

//12. Assume price of 1 USD is 76.23 rupees. WAP to take amount in INR and convert it into USD
/*
int main(){
    float usd_amount,inr_amount;
    printf("\nEnter the amount in INR ");
    scanf("%f",&inr_amount);
    usd_amount=76.23*inr_amount;
    printf("The amount after conversion in USD is %f USD\n",usd_amount);
    return 0;
}
*/

//13. WAP to take a 3 digit number from the user and rotate its digits by 1 position towards the right
/*
int main(){
    int num,rem;
    printf("Enter a 3 digit number : ");
    scanf("%d",&num);
    //num=num>>1;   --> This cannot work as this operato=ion is on binary number
    rem=num%10;
    rem=rem*100;
    num=num/10;
    num=num+rem;
    printf("\nThe num after rotating its digits by 1 position towards right is : %d\n",num);
    return 0;
}
*/


//==================================================
//Assignment 3 : Decision Control Statements
//==================================================


//1. WAP to check whether a given number is positive or non-positive
/*
int main(){
    int num;
    printf("Enter a number to check whether is is a positive or non-positive number: ");
    scanf("%d",&num);
    if(num>0)
        printf("The number is a positive number\n");
    else
        printf("The number is a non-positive number\n");
    return 0;
}
*/

//2. WAP to check whether a given number is divisible by 5 or not
/*
int main(){
    int num;
    printf("\nEnter a number to check if it is divisible by 5 or not\n");
    scanf("%d",&num);
    if(num<1)
        printf("\n Entered an Invalid number\n");
    if(num%5==0)
        printf("\nThe number is divisible by 5\n");
    else
        printf("\nThe number is not divisible by 5\n");
    return 0;
}
*/

//3. WAP to check whether a given number is odd or even number
/*
 int main(){
    int num;
    printf("\nEnter a number to check if it is even or odd number\n");
    scanf("%d",&num);
    if(num<1)
        printf("\n Entered an Invalid number\n");
    if(num%2==0)
        printf("\nThe number is Even number\n");
    else
        printf("\nThe number is Odd number\n");
    return 0;
}
*/

//4. WAP to check whether a given number is odd or even number without using % operator
/*
 int main(){
   int num;
   printf("\nEnter a number to check if it is even or odd number\n"); //Checking without % operator
   scanf("%d",&num);
   if(num<1)
       printf("\n Entered an Invalid number\n");
   if((num&1)==1)
       printf("\nThe number is Odd number\n");
   else
       printf("\nThe number is Even number\n");
   return 0;
}
*/

//5. WAP to check whether a given number is a 3 digit number or not
/*
 int main(){
    int num;
    printf("\n Enter a number to check if it is a 3-digit number or not:\n");
    scanf("%d",&num);
    num=num/100;
    if((num>=1) && (num<=9))
        printf("\nThe number entered is a 3-digit number\n");
    else
        printf("\n The entered number is not a 3-digit number\n");
    return 0;
}
 */

//6. WAP to print greater between 2 numbers. Print one number if both are same
/*
int main(){
    int a,b;
    printf("Enter 2 numbers :\n");
    scanf("%d%d",&a,&b);
    if(a>b)
        printf("\nThe greater number is : %d\n",a);
    else
        printf("\nThe greater number is : %d\n",b);
    return 0;
}
*/

//7. WAP to check whether the roots of a given quadratic equation are real & distinct, real & equal, or imaginary roots
//Verified each case here : (1.) a=1, b=-5, c=2 -> real & distinct (2.) a=3,b=2,c=1 -> imaginary roots (3.) a=1,b=2,c=1 -> real & equal roots
/*
int main(){
    float a,b,c,D;
    printf("Enter the Co-efficients value of a,b,c: ");
    scanf("%f%f%f",&a,&b,&c);
    D=b*b - 4*a*c;
    if(D>0)
        printf("\nThe equation has 2 real and distinct roots\n");
    else if(D==0)
        printf("\nThe equation has real and equal roots\n ");
    else
        printf("\nThe equation has imaginary roots\n");
    
    return 0;
}
*/

//8. WAP to check whether a given year is a leap year or not
/*
 // Here, 2 conditions for a leap year : 1. divisible by 4. 2. century years unless divisible by 400 are not leap years
 
int main(){
    int year;
    printf("Enter a year to check whether its a leap year or not :\n");
    scanf("%d",&year);
    if(year%4==0){
        if(((year%100)==0) && ((year%400)!=0))
            printf("Entered year is Not a leap year\n");
        else
            printf("Entered year is a leap year\n");
    }

}
 */

//9. WAP to check greatest among 3 given numbers. Print number once if the greatest number appears once or twice
/*
 int main(){
    int a,b,c;
    printf("Enter 3 numbers to check the greatest among them:\n");
    scanf("%d%d%d",&a,&b,&c);
    if((a>=b) && (a>=c))
        printf("\nThe greatest number is  %d\n",a);
    else if((b>=a) && (b>=c))
        printf("\nThe greatest number is  %d\n",b);
    else
        printf("\nThe greatest number is  %d\n",c);
    return 0;
}
*/

//10. WAP which takes the CP(cost price) and SP(selling price) of a product. Now calculate and print the profit or loss percentage.
/*
int main(){
    float cp,sp,profit,loss;
    printf("Enter the cost price and selling price of the product:\n");
    scanf("%f%f",&cp,&sp);
    profit=sp-cp;
    if (profit>0){
        profit=(profit*100)/cp;
        printf("\nThe profit made is %0.2f %%\n",profit);
    }
    else{
        loss=cp-sp;
        loss=(loss*100)/cp;
        printf("\nThe loss made is %0.2f %%\n",loss);
    }
        return 0;
}
*/

//11. WAP to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now determine whether the candidate passed the exam or failed
/*
int main(){
    int sub1,sub2,sub3,sub4,sub5;
    float avg;
    printf("Enter the marks out of 100 of student of 5 subjects\n");
    scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
    avg=(sub1+sub2+sub3+sub4+sub5)/5;
    if(avg>33)
        printf("\nThe candidate has passed the Exam\n");
    else
        printf("\nThe candidate has failed the Exam\n");

    return 0;
}
*/

//12. WAP to check whether a given alphabet is in uppercase or lowercase
/*
int main(){
    char ch;
    printf("Enter an alphabet either in uppercase or lowercase\n");
    scanf("%c",&ch);
    if((ch>='a')&&(ch<='z'))
        printf("\nEntered alphabet is in lowercase\n");
    else if((ch>='A')&&(ch<='Z'))
        printf("\nEntered alphabet is in uppercase\n");
    
    return 0;
}
*/

//13. WAP to check whether a given number is divisible by 3 and divisible by 2
/*
int main(){
    int num;
    printf("Enter a number to check whether it is divisible by 3 and by 2\n");
    scanf("%d",&num);
    if(((num%3)==0) && ((num%2)==0))
        printf("\nThe number entered is divisible by 3 and by 2\n");
    else
        printf("\nThe number entered is not divisible by 3 and by 2\n");
    
    return 0;
}
*/

//14. WAP to check whether a given number is divisible by 7 or divisible by 3
/*
int main(){
    int num;
    printf("Enter a number to check whether it is divisible by 7 or by 3\n");
    scanf("%d",&num);
    if(((num%3)==0) || ((num%7)==0))
        printf("\nThe number entered is divisible by 3 or by 7\n");
    else
        printf("\nThe number entered is not divisible by 3 or by 7\n");
    
    return 0;
}
*/


//15. WAP to check whether a given number is positive, negative or zero
/*
 int main(){
    int num;
    printf("\nEnter a number to check whether it is positive, negative or zero\n");
    scanf("%d",&num);
    if(num>0)
        printf("\nThe number entered is positive\n");
    else if(num<0)
        printf("\nThe number entered is negative\n");
    else
        printf("\nThe number entered is zero\n");

    return 0;
}
*/

//16. WAP to check whether a given character is an alphabet(uppercase), an alphabet(lowercase), a digit or a special character
/*
 int main(){
    char ch;
    printf("Enter a character in uppercase or lowercase or digit or special character \n");
    scanf("%c",&ch);
    if((ch>='a')&&(ch<='z'))
        printf("\nEntered character is in lowercase\n");
    else if((ch>='A')&&(ch<='Z'))
        printf("\nEntered character is in uppercase\n");
    else if((ch>=48)&&(ch<=57))
        printf("\nEntered character is a digit\n");
    else
        printf("\nEntered character is a special character\n");
    return 0;
}
*/

//17. WAP which takes the length of the sides of the triangle as an input. Display whether the triangle is valid or not
    //the property of triangle is : a+b>c , b+c > a, a+c > b
/*
int main(){
    int a,b,c;
    printf("Enter the length of the sides of the triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    if((a+b>c)&&(b+c>a)&&(a+c>b))
        printf("\nThis is a valid triangle\n");
    else
        printf("\nThis is not a valid triangle\n");
    return 0;
    
}
*/

//18. WAP which takes the month number as an input and display number of days in that month
/*
int main(){
    int month;
    printf("Enter the month\n");
    scanf("%d",&month);
    if((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12))
        printf("\nThe entered month number has 31 days\n");
    else if (month == 2)
        printf("\nThe entered month number has 28 days\n");
    else
        printf("\nThe entered month number has 30 days\n");
    return 0;
}
*/


//==================================================
//Assignment 4 : Decision Control Statements
//==================================================

//1.WAP to print MySirG 5 times on the screen
/*
 int main(){
    int count=1;
    while(count<=5){
        printf("MySirG\n");
        count++;
    }
    return 0;
}
*/

//2. WAP to print the first 10 natural numbers
/*
int main(){
    int n=1;
    do{
        printf("%d ",n);
        n++;
    }while(n<=10);
    return 0;
}
*/

//3. WAP to print the first 10 natural numbers in reverse order
/*
int main(){
    int n=10;
    while(n){
        printf("%d ",n);
        n--;
    }
    return 0;
}
 */

//4. WAP to print the first 10 odd natural numbers
/*
int main(){
    int n=1;
    do{
        printf("%d ",n);
        n=n+2;
    }while(n<=20);
    return 0;
}
*/

//5. WAP to print the first 10 odd natural numbers in reverse order
/*
int main(){
    int n=19;
    while(n>=1){
        printf("%d ",n);
        n=n-2;
    }
    return 0;
}
*/

//6. WAP to print the first 10 even natural numbers
/*
int main(){
    int n=2;
    do{
        printf("%d ",n);
        n=n+2;
    }while(n<=20);
    return 0;
}
*/

//7. WAP to print the first 10 even natural numbers in reverse order
/*
 int main(){
    int n=20;
    while(n>1){
        printf("%d ",n);
        n=n-2;
    }
    return 0;
}
*/

//8. WAP to print squares of the first 10 natural numbers
/*
int main(){
    int n=1;
    while(n<11){
        printf("%d ",n*n);
        n++;
    }
    return 0;
}
*/

//9. WAP to print cubes of the first 10 natural numbers
/*
int main(){
    int n=1;
    while(n<11){
        printf("%d ",n*n*n);
        n++;
    }
    return 0;
}
*/

//10. WAP to print a table of 5
/*
int main(){
    int n=1;
    while(n<11){
        printf("5 x %d = %d\n",n,n*5);
        n++;
    }
    return 0;
}
*/

//=====================================================
//Assignment 5 : More on iterative Control Statements
//=====================================================

//1. Write a program to print MySirG N times on the screen
/*
int main(){
    int n;
    printf("Enter a number N , to print N times MySirG on the screen\n");
    scanf("%d",&n);
    while(n>0){
        printf("MySirG\n");
        n--;
    }
    return 0;
}
*/
//2. Write a program to print the first N natural numbers.
/*
int main(){
    int n,i=1;
    printf("Enter a number N , to print first N natural numbers on the screen\n");
    scanf("%d",&n);
    while(i<=n){
        printf("%d ",i);
        i++;
    }
    return 0;
}
*/

//3. Write a program to print the first N natural numbers in reverse order
/*
int main(){
    int n;
    printf("Enter a number N , to print first N natural numbers in reverse order on screen\n");
    scanf("%d",&n);
    while(n>0){
        printf("%d ",n);
        n--;
    }
    return 0;
}
*/

//4. Write a program to print the first N odd natural numbers
/*
int main(){
    int n,i=1;
    printf("Enter a number N , to print first N odd natural numbers on the screen\n");
    scanf("%d",&n);
    while(i<=n){
        printf("%d ",i);
        i=i+2;
    }
    return 0;
}
*/

//5. Write a program to print the first N odd natural numbers in reverse order.
/*
int main(){
    int n;
    printf("Enter a number N , to print first N odd natural numbers in reverse order on screen\n");
    scanf("%d",&n);
    if(n%2==0)
        printf("Please enter an odd number\n");
    else
        while(n>0){
            printf("%d ",n);
            n=n-2;
        }
    return 0;
}
*/

//6. Write a program to print the first N even natural numbers
/*
int main(){
    int n,i=2;
    printf("Enter a number N, to print the first N even natural numbers:\n");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",i);
        i=i+2;
    }
    return 0;
}
*/

//7. Write a program to print the first N even natural numbers in reverse order
/*
int main(){
    int n;
    printf("Enter a number N , to print first N even natural numbers in reverse order on screen\n");
    scanf("%d",&n);
    if(n%2!=0)
        printf("Please enter an Even number\n");
    else
        while(n>0){
            printf("%d ",n);
            n=n-2;
        }
    return 0;
}
*/

//8. Write a program to print squares of the first N natural numbers
/*
int main(){
    int n,i=1;
    printf("Enter a number N to print squares of the first N natural numbers: \n");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",i*i);
        i++;
    }
    return 0;
}
*/

//9. Write a program to print cubes of the first N natural numbers
/*
int main(){
    int n,i=1;
    printf("Enter a number N to print cubes of the first N natural numbers: \n");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",i*i);
        i++;
    }
    return 0;
}
*/

//10. Write a program to print a table of N.
/*
int main(){
    int n,i=1;
    printf("Enter a number N to print the table of N: \n");
    scanf("%d",&n);

    while(i<=10){
        printf("%d x %d = %d\n",n,i,i*n);
        i++;
    }
    return 0;
}
*/

//=====================================================
//Assignment 6 : Use any loop
//=====================================================

//1. Write a program to calculate sum of first N natural numbers
/*
int main(){
    int n,sum=0;
    printf("Enter a number N to calculate sum of first N natural numbers: \n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        sum=sum+i;
    printf("The sum of the first N natural numbers is : %d\n",sum);
    return 0;
}
*/

//2. Write a program to calculate sum of first N even natural numbers
/*
int main(){
    int n,sum=0;
    printf("Enter a number N to calculate sum of first N even natural numbers: \n");
    scanf("%d",&n);
    for(int i=2;i<=n;i=i+2)
        sum=sum+i;
    printf("The sum of the first N natural numbers is : %d\n",sum);
    return 0;
}
*/

//3. Write a program to calculate sum of first N odd natural numbers
/*
int main(){
    int n,sum=0;
    printf("Enter a number N to calculate sum of first N even odd numbers: \n");
    scanf("%d",&n);
    for(int i=1;i<=n;i=i+2)
        sum=sum+i;
    printf("The sum of the first N natural numbers is : %d\n",sum);
    return 0;
}
*/

//4. Write a program to calculate sum of squares of first N natural numbers
/*
int main(){
    int n,sum=0;
    printf("Enter a number N to calculate sum of squares of first N natural numbers: \n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        sum=sum+(i*i);
    printf("The sum of the squares of first N natural numbers is : %d\n",sum);
    return 0;
}
*/

//5. Write a program to calculate sum of cubes of first N natural numbers
/*
int main(){
    int n,sum=0;
    printf("Enter a number N to calculate sum of cubes of first N natural numbers: \n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        sum=sum+(i*i*i);
    printf("The sum of the cubes of first N natural numbers is : %d\n",sum);
    return 0;
}
*/

//6. Write a program to calculate factorial of a number
/*
int main(){
    int fact;
    printf("Enter a number N to find its factorial :\n");
    scanf("%d",&fact);
    for(int i=fact-1;i>0;i--)
        fact=fact*i;
    printf("The value of the factorial is : %d\n",fact);
    return 0;
}
*/

//7. Write a program to count digits in a given number
/*
int main(){
    int num,count=0;
    printf("Enter a number to count the number of digits in it:\n");
    scanf("%d",&num);
    for(int i=1;i<num;i=i*10)
        count=count+1;
    printf("The number of digits in the number are : %d\n",count);
    return 0;
}
*/

//8. Write a program to check whether a given number is a Prime number or not
/*
int main(){
    int num;
    printf("Enter a number to check whether it is prime or not:\n");
    scanf("%d",&num);
    if(num==1)
        printf("Entered number is neither prime nor composite number\n");
    if(num==2)
        printf("Entered number is a prime number\n");
    for(int i=2;i<num;i++){
        if(num%i==0){
            printf("The entered number is Not a prime number\n");
            break;
        }
        else if(i==(num-1))
            printf("The entered number is a prime number\n");
    }
    return 0;
}
*/
    
//9. Write a program to calculate LCM of two numbers
//LCM * HCF = x * y
/*
int main(){
    int n,m,LCM;
    printf("Enter two numbers to calculate LCM\n");
    scanf("%d%d",&n,&m);
    for(LCM=1;LCM<=n*m;LCM++){
        if(LCM%n==0 && LCM%m==0){
            printf("The LCM of the given two numbers is %d\n",LCM);
            break;
        }
    }
    return 0;
}
*/

//10. Write a program to reverse a given number
/*
int main(){
    int n,n_temp,rev=0,rev_temp;
    printf("Enter a number to reverse it\n");
    scanf("%d",&n);
    n_temp=n;
    for(int i=1;i<=n;i=i*10){
        rev=rev*10;
        rev_temp=n_temp%10;
        rev=rev+rev_temp;
        n_temp=n_temp/10;
    }
    printf("The reversed number is : %d\n",rev);
    return 0;
}
*/

//=====================================================
//Assignment 7 : Iterative control statements (part-2)
//=====================================================

//1. Write a program to find the Nth term of the Fibonnaci series.
//Fibonacci series is : nth term + nth+1 term i.e. 1,2,3,5,8,13,21,34,55,89
/*
int main(){
    int n1=1,n2=2,n,fib=0;
    printf("Enter the Nth term of the Fibonnaci series\n");
    scanf("%d",&n);
    for(int i=3;i<=n;i++){
        fib=n1+n2;
        n1=n2;
        n2=fib;
        if(i==n)
            printf("\nThe Nth term of the fibonacci series is : %d\n",fib);
    }
    return 0;
}
*/

//2. Write a program to print first N terms of Fibonacci series
/*
int main(){
    int n1=1,n2=2,n,fib=0;
    printf("Enter the Nth term to print first N terms of Fibonnaci series\n");
    scanf("%d",&n);
    printf("\nFibonnaci series is : ");
    printf("%d %d ",n1,n2);    //initial values
    for(int i=3;i<=n;i++){
        fib=n1+n2;
        n1=n2;
        n2=fib;
        printf("%d ",fib);
    }
    return 0;
}
*/

//3. Write a program to check whether a given number is there in the Fibonacci series or not.
/*
int main(){
    int n1=1,n2=2,num,n=50,fib=0;    //expecting upto 50 terms of fibonnaci
    printf("Enter a number to check whether it is there in Fibonnaci series or not\n");
    scanf("%d",&num);
    if (n==1 || n==2)
        printf("\nNumber is present in Fibonnaci series\n");
    else
        for(int i=3;i<=n;i++){
            fib=n1+n2;
            n1=n2;
            n2=fib;
            if(fib==num){
                printf("Number is present in fibonaci series\n");
                break;
            }
            if(i==n)
                printf("Number is Not present in fibonnaci series\n");
        }
    return 0;
}
*/

//4. Write a program to calculate HCF of two numbers
/*
int main(){
    //x*y = LCM * HCF
    //HCF is Highest Common factor between two numbers e.g. Highest common factor bw 6 and 4 is 2 , e.g.2 is HCF between 357 and 810 is 3
    int x,y,HCF;
    printf("Enter two numbers x and y to find HCF between them: \n");
    scanf("%d%d",&x,&y);
    for(HCF=2;HCF<x>y?x:y;HCF++){
        if((x%HCF==0) && (y%HCF==0)){
            printf("\nThe HCF between x and y is : %d\n",HCF);
            break;
        }
    }
    return 0;
}
*/

//5. Write a program to check whether two given numbers are co-prime numbers or not
// If between 2 numbers , apart from 1, there is no other common factor, then they are co-prime numbers. For example : 8 and 15 . The factors for both are : 8 - 1,2,4,8 . 15 - 1,3,5,15
/*
int main(){
    int x,y,co_prime;
    printf("Enter two numbers x and y to find HCF between them: \n");
    scanf("%d%d",&x,&y);
    for(co_prime=2;co_prime<=(x>y?x:y);co_prime++){
        if((x%co_prime==0) && (y%co_prime==0)){
            printf("\nThe numbers entered are not Co prime number\n");
            break;
        }
        if (co_prime==(x>y?x:y)){
            printf("\nThe numbers entered are Co-prime numbers !\n");
            break;
        }
    }
    return 0;
}
*/


//6. Write a program to print all Prime numbers under 100
/*
int main(){
    printf("\nAll prime numbers under 100 are : \n");
    printf("2 ");
    for(int n=2;n<100;n++){
        for(int i=2;i<n;i++){
            if(n%i==0)
                break;
            if(i==(n-1)){
                printf("%d ",n);
            }
        }
    }
    return 0;
}
*/

//7. Write a program to print all Prime numbers between two given numbers
/*
int main(){
    int x,y;
    printf("\nEnter 2 numbers to print prime numbers between both : \n");
    scanf("%d%d",&x,&y);
    if((x==2)||(y==2))
        printf("2 ");
    for(int n=(x<y?x:y);n<=(x>y?x:y);n++){
        for(int i=2;i<n;i++){
            if(n%i==0)
                break;
            if(i==(n-1)){
                printf("%d ",n);
            }
        }
    }
    return 0;
}
*/

//8. Write a program to find next Prime number of a given number
/*
int main(){
    int x,i;
    printf("\nEnter a number to find next prime number to it : \n");
    scanf("%d",&x);
    for(int n=x+1;n<=1000;n++){
        for(i=2;i<n;i++){
            if(n%i==0)
                break;
            if(i==(n-1)){
                printf("\nThe next prime number is %d \n",n);
                break;
            }
        }
        if(i==(n-1)){
            break;
    }
    }
    return 0;
}
*/

//9. Write a program to check whether a given number is an Armstrong number or not
//Armstrong number means the number entered, that number's digits cube sum is by chance, the same number, then it is an armstrong number. Example : 123 => 1^3 + 2^3 + 5^3 =/= 125 so not an armstrong number.
/*
int main(){
    int n,r,x,s;
    printf("Enter a number to check if entered number is an Armstrong number or not :\n");
    scanf("%d",&n);
        s=0;
        x=n;
        while(x!=0){
            r=x%10;     //r contains the remainder
            s=s+r*r*r;  //s is the number we form after doing cube of each digit
            x=x/10;
        }
        if(s==n)
            printf("The entered number %d is an Armstrong number\n",n);
        else
            printf("The entered number %d is Not an Armstrong number\n",n);
    return 0;
}
*/

//10. Write a program to print all Armstrong numbers under 1000
//1 to 1000 contains 5 armstrong numbers
/*
int main(){
    int n,r,x,s;
    printf("Armstrong numbers under 1000 are :\n");
    for(n=1;n<=1000;n++){
        s=0;
        x=n;
        while(x!=0){
            r=x%10;    //r contains the remainder
            s=s+r*r*r;
            x=x/10;
        }
        if(s==n)
            printf("%d\n",n);
    }
    return 0;
}
*/


//=====================================================
//Assignment 8 : Pattern Problems
//=====================================================

//1. Draw following pattern :
/*
int main(){
    for(int i=1;i<6;i++){
        for(int j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
*/

//2. Draw following pattern :
/*
int main(){
    for(int i=5;i>0;i--){
        for(int j=1;j<6;j++){
            if(j<i){
                printf(" ");
            }
            else
                printf("*");
            }
            
        printf("\n");
    }
    printf("\n");
    return 0;
}
*/

//3. Draw following pattern :
/*
int main(){
    for(int i=5;i>0;i--){
        for(int j=0;j<5;j++){
            if(j<i){
                printf("*");
            }
            else
                printf(" ");
            }
            
        printf("\n");
    }
    printf("\n");
    return 0;
}
*/

//4. Draw following pattern :
/*
 int main(){
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            if(j>=i){
                printf("*");
            }
            else
                printf(" ");
            }
        printf("\n");
    }
    printf("\n");
    return 0;
}
*/

//5. Draw following pattern :
/*
    *
   ***
  *****
 *******
*********
*/

/*
int main(){
    int i,j;
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            
        }
            
    }
        
    return 0;
}

*/

//=====================================================
//Assignment 9 : Switch Case Problems
//=====================================================

//1. Write a program which takes the month number as an input and display number of days in that month.
/*
int main()
{
    int month_no;
    printf("\nEnter the month number :\n");
    scanf("%d",&month_no);
    
    switch(month_no){
        case 1:
            printf("January");
            break;
        case 2:
            printf("Feb");
            break;
        case 3:
            printf("March");
            break;
        case 4:
            printf("April");
            break;
        case 5:
            printf("May");
            break;
        case 6:
            printf("June");
            break;
        case 7:
            printf("July");
            break;
        case 8:
            printf("August");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("October");
            break;
        case 11:
            printf("November");
            break;
        case 12:
            printf("December");
            break;
        default:
            printf("Wrong input value entered\n");
            
    }
    return 0;
}
*/

//2. Write a menu driven program with the following options: a. Addition  b. Subtraction  c. Multiplication  d. Division  e. Exit
/*
int main(){
    char ch;
    printf("Enter any options to perform : a. Addition  b. Subtraction  c. Multiplication  d. Division  e. Exit \n");
    scanf("%c",&ch);
    switch(ch){
        case 'a':
        {
            int a,b,sum;
            printf("Enter 2 numbers for addition:");
            scanf("%d%d",&a,&b);
            sum=a+b;
            printf("\nThe sum is %d\n",sum);
            break;
        }
        case 'b':
        {
            int a,b,sub;
            printf("Enter 2 numbers for subtraction:");
            scanf("%d%d",&a,&b);
            sub=a-b;
            printf("\nThe sub is %d\n",sub);
            break;
        }
        case 'c':
        {
            int a,b,mul;
            printf("Enter 2 numbers for multiplication:");
            scanf("%d%d",&a,&b);
            mul=a*b;
            printf("\nThe mul is %d\n",mul);
            break;
        }
        case 'd':
        {
            int a,b;
            float div;
            printf("Enter 2 numbers for div:");
            scanf("%d%d",&a,&b);
            div=float(a/b);
            printf("\nThe division is %0.2f\n",div);
            break;
        }
        case 'e':
            exit(0);
        default:
            printf("Incorrect option specified\n");
            break;
    }
    return 0;
}
*/

// 3. Write a program which takes the day number of a week and displays a unique greeting message for the day.
/*
 int main(){
    int week_no;
    printf("\nEnter the day number of the week:\n");
    scanf("%d",&week_no);
    switch(week_no){
        case 1:
            printf("\nHave a great Monday\n");
            break;
        case 2:
            printf("\nHave a great Tuesday\n");
            break;
        case 3:
            printf("\nHave a great Wednesday\n");
            break;
        case 4:
            printf("\nHave a great Thursday\n");
            break;
        case 5:
            printf("Have a great Friday\n");
            break;
        case 6:
            printf("\nHave a great Saturday\n");
            break;
        case 7:
            printf("Have a great Sunday\n");
            break;
        default:
            printf("Invalid input\n");
    }
    return 0;
}
 */
// 4. Write a menu driven program with the following options: a. Check whether a given set of three numbers are lengths of an isosceles triangle or not  b. Check whether a given set of three numbers are lengths of sides of   a right angled triangle or not  c. Check whether a given set of three numbers are equilateral triangle  or not  d. Exit
/*
int main(){
    int a;
    printf("Enter any options to Check : 1. Isoceles triangle 2. Right angled triangle 3. Equilateral triangle\n");
    scanf("%d",&a);

    switch(a){
        case 1:    //isoceles triangle has any 2 equal sides and 2 equal angles. It could also be an equilateral triangle
        {
            int a,b,c;
            printf("Enter lengths of 3 numbers to check whether it is an isoceles triangle or not\n");
            scanf("%d%d%d",&a,&b,&c);
            if (a==b||b==c||c==a)
                printf("\n it is an isoceles triangle\n");
            else
                printf("\n it is Not an isoceles triangle\n");
        }
        break;
        case 2:
        {
            int a,b,c;
            printf("Enter lengths of 3 numbers to check whether it is a right angled triangle or not");
            scanf("%d%d%d",&a,&b,&c);
            if(((a*a + b*b) == c*c)||((c*c + a*a) == b*b)||((b*b + c*c) == a*a))
                printf("It is a right angled triangle\n");
            else
                printf("It is a right angled triangle\n");
            break;
        }
            
        case 3:
        {
            int a,b,c;
            printf("Enter lengths of 3 numbers to check if given triangle is an equilateral triangle\n");
            scanf("%d%d%d",&a,&b,&c);
            if((a==b)&&(a==c))
                printf("it is an equilateral triangle\n");
            else
                printf("It is not an equilateral triangle\n");
            break;
        }
        default:
            printf("None of the above\n");
    }
    return 0;
}
*/

// 5. Convert the following if-else-if construct into switch case:
/*if(var == 1)
System.out.println("good");
else if(var == 2)
System.out.println("better");
else if(var == 3)
System.out.println("best");
else
System.out.println("invalid");
*/
/*
int main(){
    int i;
    printf("enter an int to know how you feel 1. good 2. better 3. best\n");
    scanf("%d",&i);
    switch(i){
        case 1:
            printf("good\n");
            break;
        case 2:
            printf("better\n");
            break;
        case 3:
            printf("best\n");
            break;
        default:
            printf("invalid\n");
    }
    return 0;
}
 */
//6. Program to check whether a year is a leap year or not. Using switch statement
/*
int main(){     //if no is divisible by 100 and not by 400 , then the leap year is skipped
    int yr;
    printf("Enter a year to see if it is a leap year or not:\n");
    scanf("%d",&yr);
    switch((yr%4)==0){
        case 0:
            printf("It is not a leap year\n");
            break;
        case 1:
            if((yr%400 !=0) && (yr%100 == 0))
                printf("It is Not a leap year\n");
            else
                printf("It is a leap year\n");
            break;
    }
    return 0;
}
*/


//see if there is any alternate approach to solve this ? We can have nested switch case



//Another solution to same problem :
/*
int main(){     //if no is divisible by 100 and not by 400 , then the leap year is skipped
    int yr;
    printf("Enter a year to see if it is a leap year or not:\n");
    scanf("%d",&yr);
    switch((yr%4)==0){
        case 0:
            printf("It is not a leap year\n");
            break;
        case 1: switch((yr%400 != 0) && (yr%100 == 0))
            {
                case 1:
                    printf("It is Not a leap year\n");
                    break;
                case 0:
                    printf("It is a leap year\n");
                    break;
            }break;
    }
    return 0;
}
*/

/*
 7. Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.
*/
//This is a software to calculate electricity bill
//if you use char, you will have to use fflush(stdin) (to empty the buffer) before using scanf() function, it can lead to unpred behaviour. Another solution is to use getchar function
/*

 int main(){
    int unit;
    printf("Enter total electricity units:\n");
    scanf("%d",&unit);
    switch(unit){
        case 1 ... 50:
            printf("\nThe total charge for %d units is : %.3f and with surcharge is %.3f\n",unit,unit*0.50,unit*0.50+((unit*0.50)*0.20));
            break;
        case 51 ... 150:
            printf("\nThe total charge for %d units is : %.3f and with surcharge is %.3f \n",unit,(50*0.50) + ((unit-50)*0.75),(50*0.50) + ((unit-50)*0.75) + (((50*0.50) + ((unit-50)*0.75))*(0.20)));
            break;
        case 151 ... 250:
            printf("\nThe total charge for %d units is : %.3f and with surcharge is %.3f\n",unit,(50*0.50) + ((100)*0.75) + ((unit-150)*1.20),(50*0.50) + ((100)*0.75) + ((unit-150)*1.20) + (((50*0.50) + ((100)*0.75) + ((unit-150)*1.20))*(0.20)));
            break;
        default:
             printf("\nThe total charge for %d units is : %.3f and with surcharge is %.3f\n",unit,(50*0.50) + ((100)*0.75) + ((100)*1.20) + ((unit-250)*1.50),(50*0.50) + ((100)*0.75) + ((100)*1.20) + ((unit-250)*1.50) + (((50*0.50) + ((100)*0.75) + ((100)*1.20)+ ((unit-250)*1.50))*(0.20)));
            //printf("\nThe total charge for %d units is : %.3f\n",unit,unit*1.50);
            break;
    }
    return 0;
}
*/

// 8. Program to convert a positive number into a negative number and negative number into a positive number using a switch statement.
/*
int main(){
    int num;
    printf("Enter a number to convert it from positive to negative or negative to positive\n");
    scanf("%d",&num);
    switch(num){
        case -100000 ... -1:
            printf("The number entered is a negative number\n");
            num = -num;
            printf("\nThe positive number is : %d\n",num);
            break;
        case 1 ... 100000:
            printf("the num entered is a positive number\n");
            num = -num;
            printf("\nThe Negative number is %d\n",num);
            break;
        default:
            printf("Number invalid\n");
    }
    return 0;
}
*/

//another approach:
/*
int main(){
    int num;
    printf("Enter a number to convert it from positive to negative or negative to positive\n");
    scanf("%d",&num);
    switch(num>0){
        case 1:
            printf("\nThe number entered is positive and negative of it is %d\n",-num);
            break;
        case 0:
            printf("\nThe number entered is negative and positive of it is %d\n",-num);
            break;
        default:
            printf("\nInvalid entry\n");
            break;
    }
    return 0;
}
*/

// 9. Program to Convert even number into its upper nearest odd number Switch Statement.
/*
int main()
{
    int num;
    printf("Enter an Even number to convert it to upper nearest odd number\n");
    scanf("%d",&num);
    switch(num%2==0){
        case 1:
            printf("\nIt is an even number %d and upper nearest odd number is %d\n",num,num+1);
            break;
        default:
            printf("\nInvalid entry\n");
            break;
    }

    return 0;
}
*/
//10. C program to find all roots of a quadratic equation using switch case
//Verified each case here : (1.) a=1, b=-5, c=2 -> real & distinct (2.) a=3,b=2,c=1 -> imaginary roots (3.) a=1,b=2,c=1 -> real & equal roots
/*
int main(){
    float a,b,c,D,D1,D2=0;
    printf("Enter the Co-efficients value of a,b,c: ");
    scanf("%f%f%f",&a,&b,&c);
    D=b*b - 4*a*c;
    
     switch(D>0){
         case 1:
             printf("\nThe equation has 2 real and distinct roots\n");
             D1 = (-b - sqrt(b*b - 4*a*c))/(2*a);
             D2 = (-b + sqrt(b*b - 4*a*c))/(2*a);
             printf("\nThe real and distinct roots are : %.3f and %.3f\n",D1,D2);
             break;
         case 0:
             switch(D==0){
                 case 1:
                     printf("\nThe equation has real and equal roots\n ");
                     D1 = -b/(2*a);
                     printf("\nThe root is : %.3f\n",D1);
                     break;
                 default:
                     printf("\nThe equation has imaginary roots\n");
                     D1 = ((-b/(2*a))+(sqrt((4*a*c)-(b*b))/(2*a)));
                     D2 = ((-b/(2*a))-(sqrt((4*a*c)-(b*b))/(2*a)));
                     printf("\nThe Imaginary roots are : %.3f and %.3f\n",D1,D2);
                 break;
    }
 }
return 0;
}
*/

//=====================================================
//Assignment 10 : Functions in C Language
//=====================================================

//1. Write a function to calculate the area of a circle. (TSRS)
/*
float area(float radius);
int main(){
    float r,area_of_circle;
    printf("Enter the radius of the circle to calculate its area:\n");
    scanf("%f",&r);
    area_of_circle = area(r);
    printf("\nThe area of the circle is %.3f\n",area_of_circle);
    return 0;
}

float area(float radius){
    float area;
    area=3.14*radius*radius;
    return area;
}
*/
//2. Write a function to calculate simple interest. (TSRS)
/*
float simple_interest(int p, float r,int n);
int main()
{
    int p,n;
    float r,si;
    printf("\nEnter the values of p,r,n to calculate simple interest\n");
    scanf("%d%f%d",&p,&r,&n);
    si = simple_interest(p,r,n);
    printf("\nThe simple interest is : %.3f\n",si);
    return 0;
}

float simple_interest(int p,float r,int n)
{
    float si;
    si = (p*r*n)/100;
    return si;
}
*/

//3. Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)
/*
bool even_or_odd(int x);
int main()
{
    int num,ret_val;
    printf("\nEnter a number to check whether it is an even or an odd number\n");
    scanf("%d",&num);
    ret_val = even_or_odd(num);
    if(ret_val==1)
        printf("\nThe number is even\n");
    else
        printf("\nThe number is odd\n");
    return 0;
}

bool even_or_odd(int x)
{
    return ((x%2==0)?1:0);
}
*/

//4. Write a function to print first N natural numbers (TSRN)
/*
void natural_num(int n);
int main(){
    int n;
    printf("\nEnter a number to upto which you want to print the natural numbers\n");
    scanf("%d",&n);
    natural_num(n);
    return 0;
}

void natural_num(int n){
    printf("\nThe natural numbers are :\n");
    for(int i=1;i<=n;i++)
        printf("%d ",i);
    printf("\n");
}
*/

//5. Write a function to print first N odd natural numbers. (TSRN)
/*
void odd_natural_num(int n);
int main(){
    int n;
    printf("\nEnter a number to upto which you want to print the Odd natural numbers\n");
    scanf("%d",&n);
    odd_natural_num(n);
    return 0;
}

void odd_natural_num(int n){
    printf("\nThe odd natural numbers are :\n");
    for(int i=1;i<=2*n;i+=2)
        printf("%d ",i);
    printf("\n");
}
*/

//6. Write a function to calculate the factorial of a number. (TSRS)
/*
int factorial(int n);
int main(){
    int n,fact;
    printf("\nEnter a number to find its factorial value\n");
    scanf("%d",&n);
    fact = factorial(n);
    printf("\nThe factorial of the number is : %d\n",fact);
    return 0;
}

int factorial(int n){
    int fact=n;
    for(int i=n-1;i>=1;i--){
        fact = fact*i;
    }
    if(n==0)
        return 1;
    return fact;
}
*/

//7. Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)
/*
int factorial(int n);
int combination(int n,int r);
int main(){
    int n,r,comb;
    printf("\nEnter n items and r to find out number of combinations\n");
    scanf("%d%d",&n,&r);
    comb = combination(n,r);
    printf("\nThe combinations one can make is %d\n",comb);
    return 0;
}

int factorial(int n){
    int fact=n;
    for(int i=n-1;i>=1;i--){
        fact = fact*i;
    }
    if(n==0)
        return 1;
    return fact;
}

int combination(int n,int r){
    int comb;
    comb = ((factorial(n))/(factorial(r)*factorial(n-r)));    //formula for combination
    return comb;
}
*/

//8. Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)
/*
int factorial(int n);
int permutations(int n,int r);
int main(){
    int n,r,perm;
    printf("\nEnter n items and r to find out number of arrangements/permutations\n");
    scanf("%d%d",&n,&r);
    perm = permutations(n,r);
    printf("\nThe permutations one can make is %d\n",perm);
    return 0;
}

int factorial(int n){
    int fact=n;
    for(int i=n-1;i>=1;i--){
        fact = fact*i;
    }
    if(n==0)
        return 1;
    return fact;
}

int permutations(int n,int r){
    int perm;
    perm = ((factorial(n))/(factorial(r)));    //formula for combination
    return perm;
}
*/

//9. Write a function to check whether a given number contains a given digit or not. (TSRS)
/*
bool check_digit(int,int);
int main(){
    int num,digit;
    bool bool_result;
    printf("\nEnter a number and also a digit to see if it is contained in the number or not\n");
    scanf("%d%d",&num,&digit);
    bool_result = check_digit(num,digit);
    if(bool_result)
        printf("\nGiven number contains the given digit\n");
    else
        printf("\nGiven number does not contain the given digit\n");
    return 0;
}

bool check_digit(int num,int d){
    int rem;
    while(num>0){
        rem=num%10;
        if(rem == d)
            return 1;
        num=num/10;
    }
    return 0;
}
*/

//10. Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)
/*
void prime_fact(int num);
int main(){
    int num;
    printf("Enter a number to print all its prime factors:\n");
    scanf("%d",&num);
    printf("\n All prime factors are : ");
    prime_fact(num);
    return 0;
}
void prime_fact(int num){
    for(int i=2;i<num/2;i++){
        label: if(num%i==0){
            printf("%d ",i);
            num=num/i;
            goto label;
        }
    }
    printf("\n");
}
*/


//=====================================================
//Assignment 11 : More on functions in C Language
//=====================================================

//1. Write a function to calculate LCM of two numbers. (TSRS)

//2. Write a function to calculate HCF of two numbers. (TSRS)
//3. Write a function to check whether a given number is Prime or not. (TSRS)
/*
int prime(int n);
int main(){
    int n;
    printf("Enter a number to check whether it is a prime or not\n");
    scanf("%d",&n);
    if(prime(n))
        printf("\nThe given number is a prime number\n");
    else
        printf("\nThe given number is not a prime number\n");
    return 0;
}
int prime(int n){
    if(n==1)
        return 0;
    for(int i=2;i<=n/2;i++){
        if(n%i==0)
            return 0;
    }
    return 1;
    }
*/
    
//4. Write a function to find the next prime number of a given number. (TSRS)

//5. Write a function to print first N prime numbers (TSRN)
//6. Write a function to print all Prime numbers between two given numbers. (TSRN)
//7. Write a function to print first N terms of Fibonacci series (TSRN)
//8. Write a function to print PASCAL Triangle. (TSRN)
//9. Write a program in C to find the square of any number using the function.
//10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function.

//=====================================================
//Assignment 14 : Array in C Language
//=====================================================

//1. Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user.
/*
int main(){
    int a[10],sum=0;
    printf("Enter 10 values in the array:\n");
    for(int i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<10;i++)
        sum=sum+a[i];
    printf("\nThe sum of the numbers stored in an array is %d\n",sum);
    return 0;
}
*/
//2. Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user.
/*
int main(){
    int a[10],j=0,sum=0;
    //float avg;
    printf("Enter values of 10 numbers to calculate the average\n");
    for(int i=0;i<10;i++)
        scanf("%d",&a[i]);
    while(j<10){
        sum=sum+a[j];
        j++;
    }
    //avg=sum/10.0;
    printf("\nThe average of numbers stored in array is : %0.2f\n",sum/10.0);
    return 0;
}
*/

//3. Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10. Take array values from the user.
/*
int main(){
    int a[10],sum_even=0,sum_odd=0;
    printf("Enter 10 values in the array :\n");
    for(int i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<10;i++){
        if(a[i]%2==0)
            sum_even=sum_even+a[i];
    else
        sum_odd=sum_odd+a[i];
    }
    printf("\nThe sum of all even numbers is %d and sum of all odd numbers is %d\n",sum_even,sum_odd);
    
    return 0;
}
*/

//4. Write a program to find the greatest number stored in an array of size 10. Take array values from the user.
/*
int main(){
    int arr[10],max=-1;
    printf("Enter 10 values in the array:\n");
    for(int i=0;i<10;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<10;i++){
        if(max<arr[i])
            max=arr[i];
    }
    printf("\nThe greatest number stored in the array is %d\n",max);
    return 0;
}
*/
/*
int main(){
    char ch[10]={'D','H','R','U','V'};
    for(int i=0;i<10;i++)    //there is no point of printing NULL character so loop size can be reduced
        printf("%c",ch[i]);
    printf("\n");
    return 0;
}
 */
//Now loop can be run only that much till length of string
//NULL character will be found in str[i] and not in i variable



//5. Write a program to find the smallest number stored in an array of size 10. Take array values from the user.
/*
int main()
{
    int arr[10],min;    //taking the first value of array to initialize min
 
    printf("Enter 10 numbers to find the smallest number out of it\n");
    for(int i=0;i<10;i++)
        scanf("%d",&arr[i]);
 min=arr[0];
 for(int i=0;i<10;i++){
        if(min>arr[i])
            min=arr[i];
    }
    printf("\nThe smallest number stored in the array is %d\n",min);
    return 0;
}
*/

//6. Write a program to sort elements of an array of size 10. Take array values from the user.
//We will implement simplest i.e. bubble sort algorithm i.e. , 1) Assume that the index0 element is the smallest. Not compare it with other index elements. Let's say if index2 element is smaller, swap index2 with index0 element. Now again start index0 new element and index3. Again do similar. At the end of all comparison of index0 and other indexes, it is sure that index0 is the smallest
/*
int main(){
    int arr[10],temp;
    printf("Enter 10 values in the array and the array will be sorted as :\n");
    for(int i=0;i<10;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<10;i++){
        for(int j=i;j<10;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<10;i++)
        printf("%d ",arr[i]);
    return 0;
}
*/

//7. Write a program to find second largest in an array.Take array values from the user.
/*
//order of time complexiety is n^2 here because of the 2 loops used. Another approach can be used as well where complexiety will be n i.e. by creating 2 variables largest & second_largest. assuming the first one as largest. if next index largest, largest becomes second largest. and second largest also is compared with index if largest is still the largest.
 
int main(){
    int arr[10],temp;
    printf("Enter 10 values in the array to find the 2nd largest in the array :\n");
    for(int i=0;i<10;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<9;i++){
        for(int j=i+1;j<10;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("The 2nd largest in the array is %d\n",arr[1]);
    return 0;
}
*/

//8. Write a program to find the second smallest number in an array.Take array values from the user.
/*
 int main(){
    int arr[10],temp;
    printf("Enter 10 values in the array to find the second smallest number in the array:\n");
    for(int i=0;i<10;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<9;i++){
        for(int j=i+1;j<10;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
        printf("The second smallest number is : %d\n",arr[1]);
    return 0;
}
*/

//9. Write a program in C to read n number of values in an array and display it in reverse order. Take array values from the user.
/*
 int main(){
     int n;
     printf("\nEnter n as no. of values to be entered in the array:\n");
     scanf("%d",&n);
     int arr[n];
     printf("Enter %d elements in the array",n);
     for(int i=0;i<n;i++)
         scanf("%d",&arr[i]);
     printf("\nThe array in the reverse order looks as :\n");
     for(int i=n-1;i>=0;i--)
         printf("%d ",arr[i]);
     printf("\n");
    return 0;
}
*/

//10. Write a program in C to copy the elements of one array into another array.Take array values from the user
/*
int main(){
    int n;
    printf("Enter N as no. of values to be entered in the array:\n");
    scanf("%d",&n);
    int arr[n],arr2[n];
    printf("Enter %d elements in the array: ",n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    
    printf("The elements after copying to arr2[n] are:\n");
    for(int i=0;i<n;i++){
        arr2[i] = arr[i];
        printf("old value -> %d , new value -> %d \n",arr[i],arr2[i]);
    }
    return 0;
}
*/


//=====================================================
//Assignment 15 : Array and Functions in C Language
//=====================================================

//1. Write a function to find the greatest number from the given array of any size. (TSRS)
/*
int greatest_num(int arr[],int n);
int main(){
    int n,ret;
    printf("Enter a number N i.e. to enter no. of elements in to the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter elements into the array:\n");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    ret = greatest_num(arr,n);
    printf("\nThe greatest number from the given array of size %d elements is %d\n :",n,ret);
    return 0;
}

int greatest_num(int arr[],int n){
    int temp;
    for(int i=0;i<=n-1;i++){
        for(int j=i;j<=n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    return arr[n-1];
}
*/

//2. Write a function to find the smallest number from the given array of any size. (TSRS)
/*
int smallest_num(int arr[],int n);
int main(){
    int n,ret;
    printf("Enter a number N i.e. to enter no. of elements in to the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter elements into the array:\n");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    ret = smallest_num(arr,n);
    printf("\nThe smallest number from the given array of size %d elements is %d\n :",n,ret);
    return 0;
}

int smallest_num(int arr[],int n){
    int temp;
    for(int i=0;i<=n-1;i++){
        for(int j=i;j<=n;j++){
            if(arr[i]>arr[j]){
                  temp=arr[i];
                  arr[j]=arr[i];
                  arr[i]=temp;
            }
        }
    }
return arr[0];
}
*/

//3. Write a function to sort an array of any size. (TSRS)

/*
int sort_num(int arr[],int n);
int main(){
    int n;
    printf("Enter a number N i.e. to enter no. of elements in to the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter elements into the array:\n");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("\nThe array after sorting the given array of size %d elements is\n :",n);
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}
//implementing as takes something, return nothing as arr itself will be a pointer so the array is changed even though name is different in sort_num() function
int sort_num(int arr[],int n){
    int temp;
    for(int i=0;i<=n-1;i++){
        for(int j=i;j<=n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    return 0;
}
*/

//4. Write a function to rotate an array by n position in d direction. The d is an indicative value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
/*
int main(){
    int temp,n,pos;
    printf("Enter the N for no of positions to shift left to right elements in the array\n");
    scanf("%d",&pos);
    printf("Enter N for number of elements in the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements in the array:\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    for(int j=0;j<pos;j++){
        temp=arr[0];
        for(int k=0;k<n-1;k++){
            arr[k]=arr[k+1];}
            arr[n-1]=temp;
    }
    printf("The final array after rotating the array by %d position in left to right direction is :",pos);
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
    return 0;
}
*/

//5. Write a function to find the first occurrence of adjacent duplicate values in the array. Function has to return the value of the element.

/*
int duplicate_entry(int arr2[],int n);

int main(){
    int n,ret;
    printf("Enter N for number of elements in the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements in the array:\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    ret=duplicate_entry(arr,n);
    if(ret!=0)
        printf("The first occurence of adjacent duplicate values is for index positions %d and %d and the value is %d\n",ret,ret+1,arr[ret]);
    else
        printf("There is no occurence of duplicate values in the array\n");
    return 0;
}

int duplicate_entry(int arr2[],int n){
    for(int i=0;i<n;i++){
        if(arr2[i]==arr2[i+1])
            return i;
    }
    return 0;
}
*/

//6. Write a function in C to read n number of values in an array and display it in reverse order.
/*
int reverse_array(int arr2[],int n);

int main(){
    int n;
    printf("Enter N for number of elements in the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements in the array:\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("The reverse array is :\n");
    reverse_array(arr,n);
    return 0;
}

int reverse_array(int arr2[],int n){
    for(int i=n-1;i>=0;i--)
        printf("%d ",arr2[i]);
    return 0;
}
*/

//7. Write a function in C to count a total number of duplicate elements in an array.
/*
int count_duplicate_elements(int arr2[],int n);

int main(){
    int n,ret;
    printf("Enter N for number of elements in the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements in the array:\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    ret=count_duplicate_elements(arr,n);
    if(ret!=0)
        printf("The total number of duplicate elements in the array is : %d\n",ret);
    else
        printf("There is no occurence of duplicate values in the array\n");
    return 0;
}

int count_duplicate_elements(int arr2[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr2[i]==arr2[i+1])
            count+=1;
    }
    return count;
}
*/

//8. Write a function in C to print all unique elements in an array.
/*
int unique_array(int arr2[],int n);

int main(){
    int n;
    printf("Enter N for number of elements in the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements in the array:\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("\nThe unique elements in the array are :\n");
    unique_array(arr,n);
    return 0;
}

int unique_array(int arr2[],int n){
    for(int i=0;i<n-1;i++){
        if(arr2[i]!=arr2[i+1])
            printf("%d ",arr2[i]);
    }
        if(arr2[n-2]!=arr2[n-1])
            printf("%d\n",arr2[n-1]);
    return 0;
}
*/

//9. Write a function in C to merge two arrays of the same size sorted in descending order.
/*
int merge_array(int arr1[],int arr2[],int n);

int main(){
    int n;
    printf("Enter n i.e. no of elements in the array\n");
    scanf("%d",&n);
    int arr1[n],arr2[n];
    printf("Enter %d elements in the 1st array:",n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr1[i]);
    printf("\nNow Enter %d eleemnts in the 2nd array:",n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr2[i]);
    merge_array(arr1,arr2,n);
    return 0;
}
//Here there are 2 approaches : one is that we compare smallest element of 1 array to two arrays elements simultaneously. Another approach is, we first sort arr1 and then sort arr2. then compare arr1 and arr2 elements to sort. Another is, we first merge two arrays, and then sort. This approach we will use here

int merge_array(int arr1[],int arr2[],int n){
    int new_n;
    new_n=n+n;
    int merge_array[new_n],temp;
    for(int i=0;i<n;i++)
        merge_array[i]=arr1[i];
    
    for(int i=n;i<new_n;i++)
        merge_array[i]=arr2[i-n];

    //sorting the merged array
    for(int i=0;i<new_n-1;i++){
        for(int j=i;j<new_n;j++){
            if(merge_array[i]<merge_array[j]){
                temp=merge_array[i];
                merge_array[i]=merge_array[j];
                merge_array[j]=temp;
            }
        }
    }
    printf("The merged array after sort in descending order is: ");
    for(int i=0;i<new_n;i++)
        printf("%d ",merge_array[i]);
    printf("\n");
    return 0;
}
*/

//10. Write a function in C to count the frequency of each element of an array.
/*
int count_freq_elements(int arr2[],int n);

int main(){
    int n;
    printf("Enter N for number of elements in the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements in the array:\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    count_freq_elements(arr,n);
    return 0;
}

int count_freq_elements(int arr2[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        if(arr2[i]==arr2[j])
            count+=1;
        }
        printf("Frequency of element at index %d is %d\n",i,count);
        count=0;
    }
    return 0;
}
*/
//There is one flaw in the above code. if the same number gets repeated later, we do same print again

//Better solution is hash map technique or hashing
//take an array, of size N, by knowing there won't be any number as an array value that is greater than N. Like for example if all elements are till value 0-9 , then you will take an array of size N as 10. Now initialize this whole array with 0.Now iterate over each of the element of the user array, Let's say if we find 1, then we go to index-1 , and then increment it by 1. Like this, each index of our array will carry the count. At last, we traverse the array and get the values printed

/*
 int count_freq_elements(int arr2[],int n);

int main(){
    int n=10;
    int arr[n];
    printf("Enter %d elements in the array, enter elements between 0 to 9 :\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    count_freq_elements(arr,n);
    return 0;
}

int count_freq_elements(int arr2[],int n){
    int array_count[n];
    for(int i=0;i<n;i++)
        array_count[i]=0;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr2[i]==j)
                array_count[j]++;
        }
    }
    printf("The frequency of each element is :\n");
    for(int i=0;i<n;i++)
        printf("Element %d --> %d\n",i,array_count[i]);
    return 0;
}
*/


//=========================================================
//Assignment - 16 Multi-Dimensional Array in C Language
//=========================================================


//1. Write a program to calculate the sum of two matrices each of order 3x3.
/*
int main(){
    int a[3][3],b[3][3],c[3][3];
    printf("Enter elements in the matrix 1:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements in the matrix 2:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("The sum of the two matrices is :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d   ",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/

//2. Write a program to calculate the product of two matrices each of order 3x3.
/*
 int main(){
    int a[3][3],b[3][3],c[3][3];
    printf("Enter elements in the matrix 1:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements in the matrix 2:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("The product of the two matrices is :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            
        }
        
    }


    return 0;
}
 
 */
/*
int main(){
    int x=5;
    printf("The value of x is %d\n",x);
    return 0;
}

//3. Write a program in C to find the transpose of a given matrix.
//4. Write a program in C to find the sum of right diagonals of a matrix.
//5. Write a program in C to find the sum of left diagonals of a matrix.
//6. Write a program in C to find the sum of rows and columns of a Matrix.
//7. Write a program in C to print or display the lower triangular of a given matrix.
//8. Write a program in C to print or display an upper triangular matrix.
//9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.
//10. Write a program in C to find the row with maximum number of 1s.
*/



//=====================================================
//Assignment 17 : String Basics in C Language
//=====================================================

//1. Write a program to calculate the length of the string. (without using built-in method)
/*
int main(){
    char str[] = "Ahmedabad";
    int i;
    for(i=0;str[i];i++);
        printf("Length of the string is :%d\n",i);
    return 0;
}
*/
//taking input from user
/*
int main(){
    char str[10];
    printf("Enter a string\n");
    fgets(str,10,stdin);
    printf("\nThe name entered is : %s",str);
    
    int i;
    for(i=0;str[i]!=0;i++)
        printf("%c and %d\n",str[i],i);
        printf("\nLength of the string is :%d\n",i);

    return 0;
}
 */

//2. Write a program to count the occurrence of a given character in a given string.
/*
int main(){
    char str[]={'A','H','M','E','D','A','B','A','D'};
    //occurence of A
    int i,count=0;
    for(i=0;str[i];i++){
        if(str[i]=='A')     //or we can also do char b = 'A'; and then compare with b
            count+=1;
    }
    printf("The occurence of A is %d\n",count);
    return 0;
}
*/

//3. Write a program to count vowels in a given string
/*
int main(){
    char str[]={'A','H','M','E','D','A','B','A','D'};
    //occurence of vowels
    int i,count=0;
    for(i=0;str[i];i++){
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            count+=1;
    }
    printf("The occurence of vowels in the string is is %d\n",count);
    return 0;
}
*/

//4. Write a program to convert a given string into uppercase
/*
int main(){
    char str[20] = {0};
    printf("\nEnter a string and that will be converted to uppercase\n");
    fgets(str,20,stdin);
    printf("\n");
    
    for(int i=0;str[i]!=0;i++)
        //str[i]=str[i]-32;
    printf("%c",str[i]-32);
    
    return 0;
}
*/

//5. Write a program to convert a given string into lowercase
/*
int main(){
    char str[20] = {0};
    printf("\nEnter a string in UPPERCASE and that will be converted to lowercase\n");
    fgets(str,20,stdin);
    printf("\n");
    
    for(int i=0;str[i]!=10;i++)
        //str[i]=str[i]-32;
    printf("%c",str[i]+32);
    
    return 0;
}
*/

//6. Write a program to reverse a string.
/*
int main(){
    char str[20] = {};
    printf("Enter a string of upto 20 characters which will be reversed\n");
    fgets(str,20,stdin);
    printf("\n");
    int i,k;
    for(i=0;str[i]!=0;i++);  // for a string of 4 characters, the i=5 , condition will go false so we decrement it by 1
    char str2[i-1];
    printf("The number of elements in the string is : %d for string %s\n",i-1,str);
    k=i-1;
    for(int j=0;j<i-1;j++){
        str2[k] = str[j];
        k--;
    }
    printf("\nThe reversed string is : %s\n",str2);
    return 0;
}
*/

//7. Write a program in C to count the total number of alphabets, digits and special characters in a string.
/*
int main(){
    char str[20]={};
    printf("Enter a string of 20 characters, consisting of alphabets, digits and special characters\n");
    fgets(str,20,stdin);
    int i,count_alphabet=0,count_digits=0,count_sp=0;
    for(i=0;str[i]!=0;i++){
        if((str[i]>=65 && str[i]<=90)||(str[i]>=97 && str[i]<=122))
            count_alphabet+=1;
        else if ((str[i]>=48 && str[i]<=57))   //ASCII code of digits is 48 to 57
            count_digits+=1;
        else
            count_sp+=1;
            }
    printf("\nThe count of  alphabets, digits and special characters is %d , %d and %d\n",count_alphabet,count_digits,count_sp);
    return 0;
}
*/
//8. Write a program in C to copy one string to another string.
/*
int main(){
    char str1[]={},str2[]={};
    printf("Enter a string which will be copied into another string\n");
    fgets(str1,20,stdin);
    int i;
    for(i=0;str1[i]!='\0';i++){
        str2[i]=str1[i];
    }
    printf("\n the entered string is : %s\n",str1);
    printf("\n the copied string is : %s\n",str2);
    return 0;
}
*/

//9. Write a C program to sort a string array in ascending order.
/*
int main(){
    char str[] = "AMARDEEP";
    int temp=0;
    for(int i=0;str[i]!='\0';i++){
        for(int j=i+1;str[j]!='\0';j++){
            if(str[i] > str[j]){
                temp=str[j];
                str[j]=str[i];
                str[i]=temp;
            }
        }
    }
    printf("\nThe string array in ascending order is %s\n",str);
    return 0;
}
*/

//10. Write a program in C to Find the Frequency of Characters.
/*
int main(){
    char name[] = "AMARDEEP";
    int i=0;
    char freq[150] = {0};
    while(name[i] != '\0'){
        freq[name[i]]++;  //because name[i] is also an int value only, so we do freq[name[i]]. Other wise you will not increment actual occurence of each character
        i++;      //this i++ can also be included in above code as post-increment as freq[name[i++]]++
    }
    //now loop for printing the above populated freq[]
    for(i=0;i<150;i++){
        if(freq[i]!=0){
            printf("Occurence of %c --> %d\n",i,freq[i]);    //i is basically index i.e. character, and for each frequency, we have freq[i]
        }
    }
    return 0;
}
*/


//=====================================================
//Assignment 18 : String and Functions in C Language
//=====================================================

//1. Write a function to calculate length of the string
//2. Write a function to reverse a string.
//3. Write a function to compare two strings.
//4. Write a function to transform string into uppercase
//5. Write a function to transform a string into lowercase
//6. Write a function to check whether a given string is an alphanumeric string or not. (Alphanumeric string must contain at least one alphabet and one digit)
//7. Write a function to check whether a given string is palindrome or not.
//8. Write a function to count words in a given string
//9. Write a function to reverse a string word wise. (For example if the given string is “Mysirg Education Services” then the resulting string should be “Services Education Mysirg” )
//10. Write a function to find the repeated character in a given string.


//=====================================================
//Assignment 20 : Pointers
//=====================================================
//1. Write a function to swap values of two in variables of calling function. (TSRS)
/*
void swap (int *,int *);
int main(){
    int x=5,y=10;
    printf("\nThe values of x and y are %d and %d\n",x,y);
    swap(&x,&y);
    printf("\nAfter swapping, the values of x and y are %d and %d\n",x,y);
    return 0;
}
void swap(int *p,int *q){
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
*/
//2. Write a function to swap strings of two char arrays of calling functions. (TSRS)

//string is already a pointer as it is address. so we need 2 level of indirection here

/*
 void swap_string(char *p, char *q){
    char temp[3];
     for(int i=0;*p!='\0';i++){
         temp[i] = *p;
         p++;
}
     printf("The temp is %s",temp);
     for(int i=0;*q!='\0';i++){
         *(p+i) = *q;
         q++;
}
     printf("The *p is %s",p);
     for(int i=0;temp[i]!='\0';i++){
         *(q+i) = temp[i];
}
     printf("The *q is %s",q);
     
}

int main(){
    char str1[]="one";    //can also be written as : char *a = "one";
    char str2[]="two";
    printf("The strings entered are %s and %s\n",str1,str2);
    swap_string(str1,str2);
    printf("The strings after swap are %s and %s\n",str1,str2);
    return 0;
}
*/

//or
/*
void swap(char **x, char **y)
{
    char * temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    char *a[20],*b[20];
    printf("Enter 2 strings of 20 characters\n");
    gets(a);
    gets(b);
    
    swap(&a,&b);
    printf("\n After swap, %s and %s",a,b);
    return 0;
}
*/
//=========== working:
/*
void swap1(char **str1_ptr,char **str2_ptr)
{
    char *temp = *str1_ptr;
    *str1_ptr = *str2_ptr;
    *str2_ptr = temp;
}

int main(){
    char *str1 = "Dhruv";
    char *str2 = "Dave";
    swap1(&str1,&str2);
    printf("str1 after swap is %s and str2 is %s\n",str1,str2);
    return 0;
}
*/

//3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
/*
void sort(int *ptr,int size){
    int temp = 0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(*(ptr+i)>*(ptr+j)){
                temp=*(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr+j)=temp;
            }
        }
    }
}

int main(){
    int arr[]={5,4,3,2,1};
    sort(arr,5);
    printf("\nThe array after sorting is :\n");
    for(int i=0;i<5;i++)
        printf("%d ",arr[i]);
    return 0;
}
*/

//4. Write a program in C to demonstrate how to handle the pointers in the program.
/*
int main(){
    int x=10,*p,**q,***r;
    p = &x;
    q = &p;
    r = &q;
    
    printf("%d %d %d %d\n",x,*p,**q,***r);
    printf("%d %d %d %d\n",&x,p,*q,**r);
    printf("%d %d %d\n",&p,q,*r);
    printf("%d %d\n",&q,r);
    printf("%d\n",&r);
    return 0;
}
*/

//5. Write a program to find the maximum number between two numbers using a pointer
/*
int find_max(int *,int *);
int main(){
    int x,y;
    printf("\nEnter 2 numbers to find out maximum between them\n");
    scanf("%d%d",&x,&y);
    printf("The maximum number is : %d\n",find_max(&x,&y));
}

int find_max(int *a,int *b){
    if(*a>*b)
        return *a;
    else
        return *b;

}
*/
//6. Write a program to calculate the length of the string using a pointer
/*
int main(){
    char str[] = "Dhruv";
    int count=0;
    char *p;
    p = str;
    printf("%s",p);
    for(;*p!='\0';*p++){
        count+=1;
    }
    printf("\nCount is : %d\n",count);
    return 0;
}
*/

//7. Write a program to count the number of vowels and consonants in a string using a pointer.
/*
int main(){
    char str[20]={0};
    printf("Enter a string to count out vowels and consonants in it\n");
    fgets(str,20,stdin);
    char *p;
    int count=0;
    p=str;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' ||str[i]=='E' ||str[i]=='I' ||str[i]=='O' ||str[i]=='U')
            count+=1;
    }
    printf("\nThe count is %d\n",count);
    return 0;
}
*/

//8. Write a program to compute the sum of all elements in an array using pointers.
/*
int main(){
    int arr[] = {10,5,4,6,3,1,5,12};
    int *p;
    p=arr;
    int sum=0;
    //printf("\n%u\n",(sizeof(arr)/sizeof(arr[0])));
    //printf("%d \n",sizeof(arr));
    for(;p<=(arr+sizeof(arr)/sizeof(arr[0]));p++){
        sum+=*p;
    }
    printf("The sum of all the elements in the array is %d\n",sum);
    return 0;
}
*/

//9. Write a program to print the elements of an array in reverse order.
/*
int main(){
    int i=0,arr[10];
    int *p;
    printf("\nEnter 10 elements in the array:\n");
    while(i<10){
        scanf("%d",&arr[i]);
        i++;
    }
    printf("\nThe elements in the reverse order are: ");
    for(p=arr+((sizeof(arr)/sizeof(arr[0]))-1);p>=arr;p--){
        printf(" %d ",*p);
    }
    return 0;
}
*/

//10. Write a program to print a string in reverse using a pointer
/*
int main(){
    char str[] = "Gujarat";
    char *p;
    printf("Reverse string is : ");
    for(p=str+((sizeof(str)/sizeof(str[0]))-1);p>=str;p--){
        printf("%c",*p);
    }
    printf("\n");
    return 0;
}
*/



//=====================================================
//Assignment 21 : Structure
//=====================================================

//1. Define a structure Employee with member variables id, name, salary
struct Employee{
    int id;
    char name[20];
    float salary;
};

//2. Write a function to take input employee data from the user[refer structure from question 1]
/*
void display(struct Employee);
struct Employee input(struct Employee);

struct Employee input(struct Employee b1){
    printf("Enter employee data : id , name , salary ");
    scanf("%d",&b1.id);
    fflush(stdin);
    fgets(b1.name,20,stdin);
    b1.name[strlen(b1.name)-1] = '\0';    //so that we remove entry of \n which is stored by fgets() be default
    scanf("%f",&b1.salary);
    return b1;
}


int main(){
    struct Employee b;
    b=input(b);
    display(b);
    return 0;
}

//3. Write a function to display employee data. [ Refer structure from question 1 ]
void display(struct Employee b2){
    printf("\nThe employee data is \n : id : %d\n name : %s\n salary : %.2f\n",b2.id,b2.name,b2.salary);
}

*/
//4. Write a function to find the highest salary employee from a given array of 10 employees. [ Refer structure from question 1]
/*
void display(struct Employee);
void input(struct Employee);
void find_max_salary(struct Employee);

void input(struct Employee b1[]){
    printf("Enter 10 employee data : id , name , salary\n");
    for(int i=0;i<10;i++){
    scanf("%d",&b1[i].id);
    fflush(stdin);
    fgets(b1[i].name,20,stdin);
    b1[i].name[strlen(b1[i].name)-1] = '\0';    //so that we remove entry of \n which is stored by fgets() be default
        scanf("%f",&b1[i].salary);
    }
}

int main(){
    printf("\nEnter the data of 10 employees:\n");
    struct Employee b[10];
    input(b);
    printf("\nthe highest salary employee is :\n");
    find_max_salary(b);
    return 0;
}

void find_max_salary(struct Employee b3[]){
    float max=b3[0].salary;
    for(int i=1;i<10;i++){
        if(max<b3[i].salary)
            max=b3[i].salary;
    }
    printf("\nThe max salary is %.2f\n",max);
}
*/
/*
void display(struct Employee b2[]){
    printf("\nThe employee data is \n : id : %d\n name : %s\n salary : %.2f\n",b2.id,b2.name,b2.salary);
}
*/
//5. Write a function to sort employees according to their salaries [ refer structure from question 1]
//6. Write a function to sort employees according to their names [refer structure from question 1]
//7. Write a program to calculate the difference between two time periods.
//8. Write a program to store information of 10 students and display them using structure.
//9. Write a program to store information of n students and display them using structure
//10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student



//=====================================================
//Assignment 23 : Basics of C++
//=====================================================


//1. Write a C++ program to print Hello MySirG on the screen.
/*
int main(){
    std::cout<<"Hello MySirG"<<std::endl;
    return 0;
}
*/
//2. Write a C++ program to print Hello on the first line and MySirG on the second line using endl.
/*
int main(){
    //std::cout<<"Hello\nMySirG"<<std::endl;
    std::cout<<"Hello"<<std::endl<<"MySirG"<<std::endl;
    return 0;
}
*/

//3. Write a C++ program to calculate the sum of two numbers.
/*
int main(){
    int a=5,b=10;
    std::cout<<"The sum of 2 numbers is :"<<a+b<<std::endl;
    return 0;
}
*/

//4. Write a C++ program to calculate the area of a circle
/*
int main(){
    float r=2.5;
    std::cout<<"The area of circle is : "<<3.14*r*r<<std::endl;
    return 0;
}
*/

//5. Write a C++ program to calculate the volume of a cuboid.
/*
int main(){
    //Volume of cuboid = l * b * h
    int l=5,b=3;
    float h=6.5;
    std::cout<<"The volume of cuboid is : "<<l*b*h<<std::endl;
    return 0;
}
*/
//6. Write a C++ program to calculate an average of 3 numbers.
/*
int main(){
    float avg;
    int a,b,c;
    std::cout<<"Enter 3 numbers to find average of it"<<std::endl;
    std::cin>>a>>b>>c;
    avg=(a+b+c)/3;
    std::cout<<"The avg is : "<<avg<<std::endl;
    return 0;
}
*/

//7. Write a C++ program to calculate the square of a number
/*
int main(){
    int a;
    std::cout<<"Enter a number to find a square of it : "<<std::endl;
    std::cin>>a;
    std::cout<<"The square of the number entered is : "<<a*a<<std::endl;
    return 0;
}
*/

//8. Write a C++ program to swap values of two int variables without using third variable
/*
int main(){
    int a,b;
    std::cout<<"Enter 2 variables and to swap their values"<<std::endl;
    std::cin>>a>>b;
    std::cout<<"The 2 variables are "<<a<<" and "<<b<<std::endl;
    b=a+b;
    a=b-a;
    b=b-a;
    std::cout<<"The values of 2 variables after swapping is "<<a<<" and "<<b<<std::endl;
    return 0;
}
*/
//9. Write a C++ program to find the maximum of two numbers.
/*
int main(){
    int a,b;
    std::cout<<"Enter 2 numbers to find a maximum out of it:"<<std::endl;
    std::cin>>a>>b;
    std::cout<<"The maximum number is :"<<(a>b?a:b)<<std::endl;
    return 0;
}
*/

//10. Write a C++ program to add all the numbers of an array of size 10.
/*
int main(){
    int sum=0,i=0,arr[10];
    std::cout<<"enter 10 numbers in the array : "<<std::endl;
    while(i<10){
        std::cin>>arr[i];
        i++;
    }
    i=0;
    while(i<10){
        sum=sum + arr[i];
        i++;
    }
    
    std::cout<<"The sum of all numbers of the array is "<<sum<<std::endl;
    return 0;
}
*/

//=====================================================
//Assignment 24 : Functions in C++
//=====================================================

//1. Define a function to check whether a given number is a Prime number or not.
/*
using namespace std;
void prime(int x){
    int i;
    if((x==0) || (x==1))
        cout<<"No a prime no";   //expecting no entered is >=0
    for(i=2;i<(x>5?x/2:x);i++)
    {
        if(x%i==0){
            cout<<"\nEntered no is not a prime no\n";
            break;
        }
    }
    if(i==x){
        cout<<"\nEntered no is a prime no"<<endl;
        }
}

int main(){
    int x;
    cout<<"Enter a no to check if it is prime or not"<<endl;
    cin>>x;
    prime(x);
    return 0;
}
*/

//2. Define a function to find the highest value digit in a given number.
/*
using namespace std;
int highest_value_digit(int);
int main(){
    int x;
    cout<<"Enter a number to find the highest value digit in given no: "<<endl;
    cin>>x;
    cout<<"the highest value digit is "<<highest_value_digit(x)<<endl;
    return 0;
}
int highest_value_digit(int y){
    int num,num2;
    num = 0;
    while(y>0){
        num2 = y%10;
        if(num2>num){
            num=num2;
            }
        y=y/10;
        }
    return num;
}
*/

//3. Define a function to calculate x raised to the power y.
/*
using namespace std;
int calc_power(int,int);
int main(){
    int x,y;
    cout<<"Enter 2 numbers to calculate x raised to the power y\n";
    cin>>x>>y;
    cout<<"The value of x power y is :"<<calc_power(x,y)<<endl;
    return 0;
}
int calc_power(int a,int b){
    int val=a;
    for(int i=1;i<b;i++)
        val=a*val;
    return val;
}
*/

//4. Define a function to print Pascal Triangle up to N lines.
//Pascal triangle is like next row middle element will be sum total from above :
/*
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1
*/
//Pascal Triangle basically help us in Binomial expansion. Like these numbers become the coefficient. nCr = n! / (n-r)!*r!
//So we need to calculate factorial here, combination here, and printPascal function
/*
i        j
1        4
2       3 5
3      2 4 6
4     1 3 5 7
*/
//line i -> 5 . then j will be -> (2*line-1)
using namespace std;
int fact(int);
int combi(int,int);
void printPascal(int);
int fact (int n){
    int f=1;        //f in the end will contain the factorial
    while(n>1){
        f=f*n;
        n--;
    }
    return f;
}

int combi(int n,int r){
    return (fact(n)/fact(n-r)/fact(r));
}

void printPascal(int line){
    int i,j,k,r;
    for(i=1;i<=line;i++){
        k=1;
        r=0;
        for(j=1;j<=2*line-1;j++){
            
            if(j>=line+1-i && j<=line-1+i && k){   //5-i && 3 + i
                //printf("*");
                printf("%2d",combi(i-1,r));    //we want to print as per result of nCr
                //%2d means it consumes 2 character places on the screen
                k=0;
                r++;
            }
            else{
                printf("  ");
                k=1;
            }
        }
        printf("\n");
    }
}

int main(){
    int l;
    cout<<"Enter number of lines for which pascal triangle needs to be printed:"<<endl;
    cin>>l;
    printPascal(l);
    return 0;
}

//5. Define a function to check whether a given number is a term in a Fibonacci series or not.
//Fibonacci series : 1 1 2 3 5 8 13 21 34 55
/*
using namespace std;
void term_in_fibo(int);
int main(){
    int a;
    cout<<"Enter a number to see whether it belongs to Fibonacci series"<<endl;
    cin>>a;
    term_in_fibo(a);
    return 0;
}
void term_in_fibo(int p){
    int result_term=0,prev_term=0,next_term=1;
    while(result_term<=p){
        if(result_term==p){
            cout<<"\nThe term is present in fibonacci series"<<endl;
            break;
        }
        result_term = next_term + prev_term;
        prev_term = next_term;
        next_term = result_term;
    }
    if(next_term>p)
        cout<<"\nThe term is not present in fibonacci series"<<endl;
}
*/
//6. Define a function to swap data of two int variables using call by reference
/*
using namespace std;
void swap(int &,int &);

int main(){
    int a=5,b=10;
    cout<<"The value before swapping of a and b are:"<<a<<" and "<<b<<endl;
    swap(a,b);
    cout<<"The values after swap of a and b are "<<a<<" and "<<b<<endl;
    return 0;
}
void swap(int &p,int &q){
    int temp;
    temp=p;
    p=q;
    q=temp;
}
*/

//7. Write a function using the default argument that is able to add 2 or 3 numbers.
/*
using namespace std;
int add(int,int,int=0);
int main(){
    int a,b,c;
    cout<<"Enter 2 numbers to add them:"<<endl;
    cin>>a>>b;
    cout<<"\nThe addition of 2 numbers is :"<<add(a,b)<<endl;
    cout<<"\nEnter 3 numbers to add them:"<<endl;
    cin>>a>>b>>c;
    cout<<"\nThe addition of 3 numbers is :"<<add(a,b,c)<<endl;

    return 0;
}
int add(int a,int b,int c){
    return a+b+c;
}
*/

//8. Define overloaded functions to calculate area of circle, area of rectangle and area of triangle
/*
using namespace std;
float area(float);
int area(int,int);
float area(float,float,float);

int main(){
    float r,base,height,constant=0.5;
    int l,b;
    cout<<"Enter radius to calculate area of the circle:"<<endl;
    cin>>r;
    cout<<"\nThe area of circle is :"<<area(r)<<endl;
    
    cout<<"Enter length and breadth to calculate area of the rectangle:"<<endl;
    cin>>l>>b;
    cout<<"\nThe area of rectangle is :"<<area(l,b)<<endl;
    
    cout<<"Enter base and height to calculate area of the triangle:"<<endl;
    cin>>base>>height;
    cout<<"\nThe area of triangle is :"<<area(constant,base,height)<<endl;
    return 0;
}

float area(float r){
    return 3.14*r*r;
}

int area(int l,int b){
    return l*b;
}
float area(float c,float b,float h){
    return c*b*h;
}
*/
//9. Write functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real.
/*
int find_max(int,int);
float find_max(float,float);
using namespace std;
int main(){
    int a,b;
    float c,d;
    cout<<"Enter 2 int numbers to find the maximum of 2 numbers:"<<endl;
    cin>>a>>b;
    cout<<"\nThe max number of the two is :"<<find_max(a,b)<<endl;
    cout<<"\nEnter 2 real numbers to find the maximum of 2 numbers:"<<endl;
    cin>>c>>d;
    cout<<"\nThe max number of the two is :"<<find_max(c,d)<<endl;
    return 0;
}
int find_max(int a,int b){
    return a>b?a:b;
}
float find_max(float a,float b){
    return a>b?a:b;
}
*/

//10. Write functions using function overloading to add two numbers having different data types.
/*
using namespace std;
int add(int, int);
float add(float, float);
int main(){
    int a,b;
    float c,d;
    cout<<"Enter 2 numbers to add them"<<endl;
    cin>>a>>b;
    cout<<"\nThe result is:"<<add(a,b)<<endl;
    
    cout<<"Enter 2 numbers to add them"<<endl;
    cin>>c>>d;
    cout<<"\nThe result is:"<<add(c,d)<<endl;
    return 0;
}
int add(int a,int b){
    return a+b;
}
float add(float c,float d){
    return c+d;
}
*/
