// #include<stdio.h>
// int main()
// {
//     int n;
//     printf(" enter no. of rows =");
//     scanf("%d", &n);
//         for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             if((i+j)%2==0) printf("1");
//             else printf("0");
//                                }
//         printf("\n");
//     }
//     return 0;
// }

                       // OR YOU CAN ALSO DO THIS QUESTION  WITH THE HELP OF EXTRA VARIABLES 
 #include<stdio.h>
int main()
{
    int n;
    printf(" enter no. of rows =");
    scanf("%d", &n);
    int a;
        for(int i=1; i<=n; i++){
        if(i%2!=0) a=1;               // ye if else star karne ke liye ki kaun sa value sa start kare , yahan pe 1 se start kar rhe hai 
        else a=0;
        for(int j=1; j<=i; j++){
            printf("%d", a);
            if(a==0) a=1;              // niche wale if else hai valiue switch karne ke liye agr 0 ho to 1 karo, 1 ho to 0 karo bas isi ke liye hai 
            else a=0;
                                     }
        printf("\n");
    }
    return 0;
}