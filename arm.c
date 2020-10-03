#include <stdio.h>
int main()
{
    int no, orig, rem, result = 0,sum = 0, a, temp;
    printf("Enter a three digit integer: ");
    scanf("%d", &no);
    orig = no;
    while(orig!=0)
    {
        a=orig%10;
        sum=sum+a;
        orig=orig/10;
    }
    printf("Sum of the digits of the given number is %d\n",sum);
    temp = no;
    while (temp != 0)
    {
        rem = temp%10;
        result += rem*rem*rem;
        temp /= 10;
    }
    if(result == no)
        printf("%d is an Armstrong number.",no);
    else
        printf("%d is not an Armstrong number.",no);
    return 0;
}
