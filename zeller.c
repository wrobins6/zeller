#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char month[255];
char March[255] = "March";
char April[255] = "April";
char May[255] = "May";
char June[255] = "June";
char July[255] = "July";
char August[255] = "August";
char September[255] = "September";
char October[255] = "October";
char November[255]= "November";
char December[255]= "December";
char January[255]= "January";
char February[255]= "February";
int d;
int m;
int Y;
int y;
int c;
int w;
float x1;
float x11;
float x2;
float x3;
int x4;
int x5;

int main () {
    printf("Input month\n");
    scanf("%s",month);
    printf("Input year\n");
    scanf("%d",&Y);
    printf("Input day\n");
    scanf("%d",&d);

    if(strcmp(month, March) == 0) {
        m = 3;
        printf("Month = %d\n", m);
        printf("Year = %d\n", Y);
    }

    if(strcmp(month, April) == 0) {
        m = 4;
        printf("Month = %d\n", m);
        printf("Year = %d\n", Y);
    }

    if(strcmp(month, May) == 0) {
        m = 5;
        printf("Month = %d\n", m);
        printf("Year = %d\n", Y);
    }

    if(strcmp(month, June) == 0) {
        m = 6;
        printf("Month = %d\n", m);
        printf("Year = %d\n", Y);
    }

    if(strcmp(month, July) == 0) {
        m = 7;
        printf("Month = %d\n", m);
        printf("Year = %d\n", Y);
    }

    if(strcmp(month, August) == 0) {
        m = 8;
        printf("Month = %d\n", m);
        printf("Year = %d\n", Y);
    }

    if(strcmp(month, September) == 0) {
        m = 9;
        printf("Month = %d\n", m);
        printf("Year = %d\n", Y);
    }

    if(strcmp(month, October) == 0) {
        m = 10;
        printf("Month = %d\n", m);
        printf("Year = %d\n", Y);
    }

    if(strcmp(month, November) == 0) {
        m = 11;
        printf("Month = %d\n", m);
        printf("Year = %d\n", Y);
    }

    if(strcmp(month, December) == 0) {
        m = 12;
        printf("Month = %d\n", m);
        printf("Year = %d\n", Y);
    }

    if(strcmp(month, January) == 0) {
        m = 13;
        Y -= 1;
        printf("Month = %d\n", m);
        printf("Year = %d\n", Y);
    }

    if(strcmp(month, February) == 0) {
        m = 14;
        Y -= 1;
        printf("Month = %d\n", m);
        printf("Year = %d\n", Y);
    }

    /* chop up the year */
    y = Y % 100;
    c = Y/100;
    printf("last two digits = %d\n", y);
    printf("First two digits = %d\n", c);

    /* begin math */
    x1 = floor(m + 1);
    x11 = floor(x1 * 2.6);
    printf("step1 = %f\n", x11);
    x2 = floor(y/4);
    printf("step2 = %f\n", x2);
    x3 = floor(c/4);
    printf("step3 = %f\n", x3);
    x4 = 2 * c;
    printf("step4 = %d\n", x4);
    x5 = d + x11 + y + x2 + x3 - x4;
    printf("step5 = %d\n", x5);
    w = x5 % 7;

    printf("Day = %d\n", w);

    /* Determine day of the week */

    switch(w)
    {
    case 0 :
        printf("Saturday\n");
        break;
    case 1 :
        printf("Sunday\n");
        break;
    case 2 :
        printf("Monday\n");
        break;
    case 3 :
        printf("Tuesday\n");
        break;
    case 4 :
        printf("Wednesday\n");
        break;
    case 5 :
        printf("Thursday\n");
        break;
    case 6 :
        printf("Friday\n");
        break;

    }

    return (0);
}
