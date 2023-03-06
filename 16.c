//Lower to uppercase letter using library function
#include<stdio.h>
int main()

{
    char upper , lower;
    printf("Enter the lowercase letter : ");
    scanf("%c",&lower);

    upper = toupper(lower);
    printf("uppercase letter = %c",upper);


    getch();
    return 0;
}
