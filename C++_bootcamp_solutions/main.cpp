//
//  main.cpp
//  C++_bootcamp_solutions
//
//  Created by Dhruv Dave on 31/07/22.
//
//Assignment-1
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
