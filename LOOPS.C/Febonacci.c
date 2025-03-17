



// Q .. print the Nth febonacci number                                       

// #include<stdio.h>                                                                
// int main()
// {
//     int a=1, b=1, sum=1, n;
//     printf( " enter your number =");
//     scanf( " %d", &n);
//     for( int i=1; i<=n-2;  i++)
//     {
//         sum = a + b;
//         a = b;
//         b = sum;
//     }
//     printf( " the %dth febonacci is = %d", n, sum);
//     return 0;
// }
     



  // Q ... Print the frist Nth febonacci number 

 #include<stdio.h>                                                                
int main()
{
    int a=1, b=1, sum=1, n;
    printf( " enter your number =");
    scanf( " %d", &n);
   
    for( int i=0; i<=n;  i++)
    {
        sum = a + b;
        a = b;
        b = sum;     
         
          printf( " the %dth febonacci is = %d\n", i, sum);
    }
   
    return 0; 
} 
 