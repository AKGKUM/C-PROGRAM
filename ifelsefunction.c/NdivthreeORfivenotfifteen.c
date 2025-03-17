// #include<stdio.h>
// int main()
// {
//     int n;
//     printf(" enter the number =");
//     scanf("%d", &n);
//     if( n % 5==0 || n % 3==0 )
//     {
//         if( n % 15 !=0 )
//         {
//             printf("divisible by 5 or 3 but not from 15 ");
//         }
//         else{
//             printf(" divisibe by 15 "); // hme aisi sankhya chahiye jo 3 or 5 se bibhajya ho but 15 se nhi

//         }
//     }
    
//     else{
//         printf("not divisible by 5 or 3 ");
//     }
//     return 0;
// }


// OR YOU CAN ALSO WRITE LIKE THIS FOLLOW



#include<stdio.h>
int main()
{
    int n;
    printf(" enter the number =");
    scanf("%d", &n);
    if( ( n % 5 ==0 || n % 3 ==0 ) &&  n % 15 !=0 ){
        printf(" divisible by 3 OR 5 but not  from 15 ");
    }
    else if(  n %15==0){
        printf("  divisible  by 15"); // to aisi sankhya hme nhi chahiye keep remember 
    }
    else{
        printf(" not divisible by 3 or 5 and 15 ");
    }
    return 0;
}