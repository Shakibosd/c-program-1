//Upper to lowercase letter using library
#include<stdio.h>
int main()

{
    char upper , lower;
    printf("Enter the uppercase letter : ");
    scanf("%c",&upper);

    lower = tolower(upper);
    printf("lowercase letter = %c",lower);


    getch();
    return 0;
}

