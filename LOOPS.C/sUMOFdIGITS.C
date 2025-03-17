#include<stdio.h>
int main()
{
    int n;
    printf(" enter your number = ");
    scanf("%d", &n);
    int sum = 0;
    int lastDigit = 0;
    while( n!=0){
      lastDigit = n%10;      // n%10; ka use hm last digit nikalne ke liye kar rhe hai 
      sum = sum + lastDigit;
      n = n/10;               // n/10 iska use last digit nikalne ke baad jo bacha huwa number hai usko fir se loop me chalana hai aur aise hi karte rhna hai jab tak condition fail na ho jaye 
    }
    printf(" the sum of digits are = %d", sum);
    return 0;
}