//
//  main.cpp
//  C++_bootcamp_solutions
//
//  Created by Dhruv Dave on 31/07/22.
//
//
//============================================
//============================================
//Assignment-1 Basics of input and output
//============================================
//============================================

#include <iostream>
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
//=====================================================
//Assignment2 : operators in C language
//=====================================================
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
//==================================================
//Assignment 3 : Decision Control Statements
//==================================================
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
