#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


void green()
{
    printf("\033[0;32m");
    // for green color
}
void purple()
{
    printf("\033[0;35m");
    // for purple color
}
void red()
{
    printf(" \033[0;31m");
    // for red color
}
void cyan()
{
    printf(" \033[0;36m");
    // for cyan color
}
void Blue()
{
    printf("\033[0;34m");
    // blue color55
}
void reset()
{
    printf("\033[0m");
}
int main()
{

    // ATM PROGRAM
    // FS21IF011
    int number1 = 15000, number2, sum;
    int a;
again:
    purple();

    printf(">>>>=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=<<<<\n");
    printf(">>>>=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=<<<<\n");
    printf("ENTER THE PASSWORD BEFOR YOU  USE ATM ...\n");
    scanf("%d", &a);

    printf(">>>>=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=<<<<\n");

    int c;
    printf("ENTER YOUR PIN\n");
    scanf("%d", &c);

    if (a == 5555)
    {
        printf("\n");
        printf(">>>>=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=<<<<\n");

        printf("WELCOME\n");
        printf(">>>>=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=<<<<\n");
    }

    else
    {
        red();
        printf("\t error 0.00.01__WRONG PASSWORD...\n");

        printf(">>>>=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=<<<<\n");
        exit(0);
        reset();
    }
    printf("NOTE:\n\t1|enter the code 11 for english\n\t2|enter the code 22 for hindi\n\t3|enter the code 33 for marathi\n");
    int b;
    printf("ENTER YOUR LANGUAGE\n");
    scanf("%d", &b);

    printf(">>>>=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=<<<<\n");
    printf("NOTE:-\n\toption:-1|enter the code 111\n\t--> for thdrawal\n\toption:-2|enter the code 222\n\t--> for balance enquiry\n\toption:-3|enter the code 333\n\t--> for withdrawal 5000rs/- \n\toption:-4|enter the code 444\n\t-->for deposit amount\n");
    int d;
    printf("ENTER YOUR OPTION\n");
    scanf("%d", &d);
    printf(">>>>=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=<<<<\n");

    if (d == 111)
    {
        printf("your silected option -->withdrawal\n");
        reset();
    }

    else if (d == 222)

    {
        green();
        printf("your silected option -->balance enquiry\n");
        goto balen;
    }

    else if (d == 333)

    {
        green();
        printf("your silected option --> withdrawal 5000rs/- \n");
        goto sile;
    }
    else if (d == 444)

    {
        green();
        printf("your silected option --> deposite amount \n");
        goto deposite;
    }

    else
    {
        red();
        printf("\t--option code error__0.00.02\n\t\t--code error--\n");
        // reset();
        //  exit(0);
    }
    purple();
    printf("NOTE:-\nsilect your umount:-\n\t1||withdrawal 1000rs/-\n\t2||withdrawal 5000rs/-\n\t3||withdrawal 10,000rs/-\n", d == 111);

    printf("NOTE:-\t\n\t1|||enter the code 1000 for withdrawal 1000rs/-\n\t2|||enter the code 5000 for withdrawal 5000rs/-\n\t3|||enter the code 10000 for withdrawal 10,000rs/-\n ");

    int e;
    printf("enter your code for withdrawal some money~~\n");
    scanf("%d", &e);
    if (e == 1000)
    {
        green();
        printf("\twithdrawal 1000rs/- processed...\nyour main balence 14,000rs/-\n \t\n\t--collect your card--\n");
        reset();
        goto end; // g
    }
    else if (e == 5000)
    {
        green();
        printf("\twithdrawal 5000rs/- processed...\nyour main balence 10,000rs/-\n\t\n\t--collect your card--\n");
        goto end; // g
    }

    else if (e == 10000)

    {
        green();
        printf("\twithdrawal 10000rs/- processed...\nyour main balence 5000rs/-\n\t\n\t--collect your card--\n");
        goto end; // g
    }
    else
    {
        red();
        printf("\t--withdrawal CODE ERROR__0.00.03--\n");
    }
    exit(0);

balen:
    printf("your main balance 15,000rs/-\n\t\n\t--collect your card--\n ", d == 222);
    goto end; // g
    exit(0);
deposite:

    printf("enter your deposite amount\n");
    scanf("%d", &number2);
    sum = number1 + number2;
    printf("your totul deposite amount is-->> %d/-rs\n", sum);
    goto end;
    exit(0);
    goto end; // g
sile:

    printf("withdrawal 5000rs/- processed... \n \t\n\t--collect your card--\n \t --Have a nice day--\n", d == 333);
end:
    green();
    printf(">>>>=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=<<<<\n");
    reset();

    int z;

    cyan();

    printf("\t---can you use again ! click code 0---\n");
    printf("\t---can you exit ! click code 1---\n");

    printf(">>-------------------------------------------------<<\n");

    printf("Enter code-->>");
    reset();
    scanf("%d", &z);
    if (z == 0)
    {
        goto again;
    }
    else if (z == 1) //
    {
        goto fir;
    }

    else
    {
        red();
        printf("\tAX arror__0.00.05\n\t\t--code error--\n\tprogram_incomplete \n");
        exit(0);
    }

fir:
    Blue();
    printf("\t\tHAVE A NICE DAY SIR/Ms...\n");
    printf(">>>>=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=<<<<\n");
    printf(">>>>=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=<<<<\n");
    printf(">>>-------------------------------------------------<<<\n");
    printf(">>>-----------created by >||FS21IF011||-------------<<<\n");
    printf(">>>------------1:code_editor-->_VS CODE_-------------<<<\n");
    printf(">>>-----------2:compiler----->Mingw 64_-------------<<<\n");
    printf(">>>-----------3:extensions--->c/c++____-------------<<<\n");
    printf(">>>>=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=<<<<\n");
    printf(">>>>=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=<<<<\n");
    exit(0);
    return 0;
}
