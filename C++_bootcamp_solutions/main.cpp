//
//  main.cpp
//  C++_bootcamp_solutions
//
//  Created by Dhruv Dave on 31/07/22.
//
//
//=========================================
//Assignment-1 Basics of input and output
//=========================================

#include <iostream>

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


//======================================================
//Assignment2 : operators in C language
//======================================================


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
