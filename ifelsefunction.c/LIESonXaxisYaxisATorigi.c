#include<stdio.h>
int main()
{
    int x, y;
    printf(" enter your coordinates = ");
    scanf("%d %d", &x, &y );
     if(x==0 && y==0){
        printf("at origin  ");

    }
    else if( y==0){
        printf(" lies on x-axis ");
    }

else if( x==0){
    printf(" lies on y-axis ");

}
else{
    printf(" not lies on a-axis and y-axis ");
}
return  0;
}
