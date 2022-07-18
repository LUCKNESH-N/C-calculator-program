#include <stdio.h>
#include <stdlib.h>

int main()
{
    double first;
    double sec;
    char cmd;
    printf("Enter the first number      : ");
    scanf("%lf", &first);//while we scan a flot number we have to use %lf insted %f in scanf part. in printf part we can use %f asusual

    printf("enter the command +/-/%/*   : " );
    scanf(" %c",&cmd);//if we want to scan a character we have to use the format specifier for single char %C followed by a "SPACE" .

    printf("Enter the second number     : ");
    scanf("%lf", &sec);
if(cmd=='+')
{
    printf("%f   plus   %f   is   %f",first,sec,(first+sec));

}
else if(cmd=='-')
{
   printf("%f   minus   %f   is   %f",first,sec,(first-sec));
}
else if(cmd=='*')
{
    printf("%f   multiplied with   %f   is   %f",first,sec,(first*sec));
}
else if(cmd=='%')
{
     printf("%f   divided by   %f   is   %f",first,sec,(first/sec));
}
else
{
    printf("enter a valid command!");
}
    return 0;
}
