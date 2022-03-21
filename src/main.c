#include <stdio.h>
int main() {
    int a,b,c,d,e,f;
    printf("Enter your age:");
    scanf("%d",&a);
    b=a*365;
    printf("\nYour age is:%d days\n\n",b);
    c=a*12;
    printf("Your age is:%d months\n\n",c);
    d=a*365*24;
    printf("Your age is:%d hours\n\n",d);
    e=a*365*24*60;
    printf("Your age is:%d minutes\n\n",e);
    f=a*365*24*60*60;
    printf("Your age is:%d seconds\n\n",f);
    printf("\t   Thank you!");;
    return 0;
}
